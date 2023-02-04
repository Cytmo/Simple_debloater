#!/usr/bin/python
from __future__ import print_function
import os, subprocess, sys
import utils
BIN = ''
source_path=''


def compile_with_cov(source,dest=""):
    print('Compiling to '+source+"_origin")

    abspath = os.path.abspath(source)
    ret = subprocess.call(["gcc",abspath,"-w", "-o",abspath+"_origin","-fprofile-arcs","-ftest-coverage","-D __msan_unpoison(s,z)","-lpcre"])
    if(utils.exit_status(ret,"Compile")==0):
        utils.move_file("*.gcno","temp")
        global BIN 
        BIN = source+"_origin"
        print('Compiled file is '+BIN )



def execute(cmd):
    print('running ', cmd)
    p = subprocess.Popen(cmd, shell=True)
    p.communicate()
    return p.returncode

def debloat():
    run_tests()
    # get gcov data
    ret1 = subprocess.call(["gcov","-i",source_path])
    utils.exit_status(ret1,"gcov generate")
    
    utils.move_file("*.gcov.json.gz","temp")
    
    ret2 = subprocess.call(["gzip","-d",source_path+".gcov.json.gz"])
    utils.exit_status(ret2,"gcov decompress")
    
def verify():
    run_tests("tmp.log2")
    cmd = 'diff tmp.log tmp.log2'
    ret = execute(cmd)    
    if(ret==0):
        print("Verify successed!")
    else:
        print("Verify failed!")
    
def run_tests(output_file="tmp.log"):

    for fname in os.listdir('temp/train'):
        fpath = os.path.join('temp/train', fname)
        # -c
        cmd = BIN + ' -c < ' + fpath + ' > '+output_file
        execute(cmd)
    
def train_run(arg):
    cmd = BIN + ' ' + arg
    execute(cmd)

def run_tests():
    # 19
    train_run( """ "a" temp/train1  > log1""")
    train_run( """ -n "si" temp/train1  > log1""")
    train_run( """ -o [r][a][n][d]* temp/train1  > log1""")
    train_run( """ -v "a" temp/train1  > log1""")
    train_run( """ -i "Si" temp/train1  > log1""")
    train_run( """ -w "Si" temp/train1  > log1""")
    train_run( """ -x "Don't" temp/train1  > log1""")
    train_run( """ -E "randomtext*" temp/train1  > log1""")
    train_run( """ "ye " temp/train1  > log1""")
    train_run( """ "cold" temp/train1  > log1""")
    train_run( """ "not exist" temp/train1  > log1""")
    train_run( """ ^D  temp/train1  > log1""")
    train_run( """ .$  temp/train1  > log1""")
    train_run( """ \^  temp/train1  > log1""")
    train_run( """ \^$  temp/train1  > log1""")
    train_run( """ ^[AEIOU]  temp/train1  > log1""")
    train_run( """ ^[^AEIOU]  temp/train1  > log1""")
    train_run( """ -E "free[^[:space:]]+"  temp/train1  > log1""")
    train_run( """ -E '\b(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?\.)3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)'  temp/train1  > log1""")
    return

def test():
    BIN = './gzip.orig_temp/gzip.orig.debloated'

    for fname in os.listdir('test'):
        fpath = os.path.join('test', fname)
        # -c
        cmd = BIN + ' -c < ' + fpath + ' > tmp.log'
        execute(cmd)


def clean():
    for fname in os.listdir('./'):
        if fname == "run.py" or fname == "utils.py":
            continue
        if fname.startswith('test') or fname.startswith('train') or fname == "backup":
            continue
        
        if fname == 'test' or fname == 'train' or fname == "backup":
            continue

        if fname == "gzip-1.2.4.c":
            continue

        execute('rm -rf ./' + fname)

def usage():
    print('python run.py clean|run_tests|debloat\n')
    sys.exit(1)

def main():
    global BIN
    global source_path
    

    if len(sys.argv) != 2 and len(sys.argv) != 3:
        usage()

    if sys.argv[1] == 'debloat':
        source_path = sys.argv[2]
        compile_with_cov(source_path)
        BIN =  "./"+source_path + "_origin"
        debloat()

    elif sys.argv[1] == 'clean':
        clean()

    elif sys.argv[1] == 'verify':
        source_path = sys.argv[2]
        compile_with_cov(source_path)
        BIN =  "./"+source_path + "_origin"
        verify()
    
    else:
        usage()

if __name__ == '__main__':
    main()