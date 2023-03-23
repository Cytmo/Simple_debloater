import os
from platform import platform
from shutil import copyfile
import subprocess
import argparse
import sys
import utils
import merge
import json_code_remover
import time
import security_ops
import delta_debugging
current_work_dir = os.path.dirname(__file__)
file = open("test.log", 'w').close()
logger = utils.GetLog().get_log()
logger.info('Debloating start...')


parser = argparse.ArgumentParser()
#Argument list
# formatted=False
parser.add_argument("-s",'--source_file',required=True, type=str,help='The path to source file')
parser.add_argument("-i",'--input_folder',required=True, type=str,help='The path to ur inputs, which should contain the features u want to preserve')
# parser.add_argument("-f",'--format',name_or_flags=formatted,help='If c file is formatted')
parser.add_argument("-option_string1","--o1",type=str,help="An test for optional para")
args = parser.parse_args()

logger.info(args)
# Global var
# formatted= args.format
source_path=args.source_file
binary_path=""
input_path=args.input_folder
dir_name=""


def compile_with_cov(source,dest=""):
    logger.info('Compiling to '+source+"_origin")

    abspath = os.path.abspath(source)
    ret = subprocess.call(["gcc",abspath,"-w", "-o",abspath+"_origin","-fprofile-arcs","-ftest-coverage"])
    if(utils.exit_status(ret,"Compile")==0):
        utils.move_file("*.gcno",dir_name)
        global binary_path 
        binary_path = source+"_origin"
        logger.info('Compiled file is '+binary_path )
        
def parse_inputs():
    logger.info("Input folder is "+input_path)
    files = utils.get_files_in_folder(input_path)
    for input_file in files:
        file = open(input_file)  
        inputs=[]
        
        line = file.readline()             
        while line:                
            inputs.append(line.replace("\n","")) 
            line=file.readline()

        file.close()
        logger.info('The inputs to be ran:')
        for line in inputs:
            # divide parameter by space
            line = line.split()
            logger.info(line)
    
    return inputs


def run_inputs(mode):
    run_time=0
    parsed_inputs=parse_inputs()
    output=open(dir_name+os.sep+'output',mode='w')
    for line in parsed_inputs:
        logger.info("running the "+str(run_time)+"th input: "+line)
        run_time+=1
        run_prog(line,output)
        
        # merge.cov_merge(source_path,run_time,dir_name)
    output.close()    
    
    # generate Output JSON intermediate format into .gcov.json.gz file
    ret1 = subprocess.call(["gcov","-i",source_path])
    utils.exit_status(ret1,"gcov generate")
    
    utils.move_file("*.gcov.json.gz",dir_name)
    
    ret2 = subprocess.call(["gzip","-d",source_path+".gcov.json.gz"])
    utils.exit_status(ret2,"gcov decompress")
    
    
    # move the generated .gcov file to temp folder
    # utils.move_file("*.gcov",dir_name)

def run_prog(arg,dest):
    # 指定dest后，第二次运行run会卡死？
    # ret = subprocess.run([binary_path,arg],stdout=dest)
    logger.info(arg)
    # ret = subprocess.run([binary_path,arg],timeout=10)
    cmdline=arg
    # for parameters in arg:
    #     cmdline += " "+parameters 
    logger.info("The cmdline to be run is "+binary_path+" "+cmdline)
    ret = os.system(binary_path+" "+cmdline)
    # move the generated file to temp folder
    # No need to move .gcov file every time because cov data will auto gain in .gcda file
    # utils.move_gcov_files(dir_name)
    
    #ret=CompletedProcess(args='gzip-1.2.4/gzip-1.2.4.c.origin.c_origin', returncode=1)
    # if(ret.returncode!=0):
    #     logger.info("Program exited with code "+str(ret.returncode))
    # else:
    #     logger.info("Program exited normally")
        


if __name__ == '__main__':
    # Redirect output to print.log
    t = time.time()
    

    utils.clean()
    dir_name = utils.create_directory('temp')
    # fp = open("temp"+os.sep+"print.log", "w+")
    # sys.stdout = fp 
   
    new_source_path,new_input_path,dir_name=utils.preparation(source_path,input_path,dir_name)	    
    source_path = new_source_path
    input_path = new_input_path

    	  
    logger.info('{:30s}{}'.format('Now time is ',time.strftime('%Y-%m-%d %H:%M:%S')))
    logger.info("The source file u want to run debloat with is "+args.source_file)
    
    # compile_with_cov(source_path)
    # run_inputs("file_input")
    cmd = "python3 %s/run.py debloat %s" %(dir_name,source_path)
    utils.exec_cmd(cmd)
    file_name,deleted_functions = json_code_remover.code_remove(source_path+".gcov.json",source_path)
    security_ops.begin_ops(only_remove_comments=True)
    delta_debugging.run_dd(deleted_functions) 
    security_ops.begin_ops(only_remove_comments=True)
    
    logger.info(f'time cost:{time.time() - t:.4f}s')
    
    
    utils.finish(source_path)
    
   # r = subprocess.call(["gcc -fprofile-arcs -ftest-coverage"])
