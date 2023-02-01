# #-----------------------------------------------------------------
# # pycparser: dump_ast.py
# #
# # Basic example of parsing a file and dumping its parsed AST.
# #
# # Eli Bendersky [https://eli.thegreenplace.net/]
# # License: BSD
# #-----------------------------------------------------------------
# from __future__ import print_function
# import argparse
# import sys

# # This is not required if you've installed pycparser into
# # your site-packages/ with setup.py
# sys.path.extend(['.', '..'])

# from pycparser import parse_file

# if __name__ == "__main__":
#     argparser = argparse.ArgumentParser('Dump AST')
#     argparser.add_argument('filename',
#                            default='../gzip-1.2.4/gzip-1.2.4.c.origin.c',
#                            nargs='?',
#                            help='name of file to parse')
#     argparser.add_argument('--coord', help='show coordinates in the dump',
#                            action='store_true')
#     args = argparser.parse_args()

#     ast = parse_file(args.filename, use_cpp=True)
#     ast.show(showcoord=args.coord)



#-----------------------------------------------------------------
# pycparser: func_defs.py
#
# Using pycparser for printing out all the functions defined in a
# C file.
#
# This is a simple example of traversing the AST generated by
# pycparser. Call it from the root directory of pycparser.
#
# Eli Bendersky [https://eli.thegreenplace.net/]
# License: BSD
#-----------------------------------------------------------------
# from __future__ import print_function
# import sys

# # This is not required if you've installed pycparser into
# # your site-packages/ with setup.py
# sys.path.extend(['.', '..'])

# from pycparser import c_ast, parse_file


# # A simple visitor for FuncDef nodes that prints the names and
# # locations of function definitions.
# class FuncDefVisitor(c_ast.NodeVisitor):
#     def visit_FuncDef(self, node):
#         print('%s at %s' % (node.decl.name, node.decl.coord))


# def show_func_defs(filename):
#     # Note that cpp is used. Provide a path to your own cpp or
#     # make sure one exists in PATH.
#     ast = parse_file(filename, use_cpp=True,
#                      cpp_args=r'-Iutils/fake_libc_include')

#     v = FuncDefVisitor()
#     v.visit(ast)


# if __name__ == "__main__":
#     if len(sys.argv) > 1:
#         filename  = sys.argv[1]
#     else:
#         filename = '../gzip-1.2.4/gzip-1.2.4.c.origin.c'

#     show_func_defs(filename)


#-----------------------------------------------------------------
# pycparser: serialize_ast.py
#
# Simple example of serializing AST
#
# Hart Chu [https://github.com/CtheSky]
# Eli Bendersky [https://eli.thegreenplace.net/]
# License: BSD
#-----------------------------------------------------------------
from __future__ import print_function
import pickle
import sys

sys.path.extend(['.', '..'])
from pycparser import c_parser

text = r"""
void func(void)
{
  x = 1;
}
"""

if __name__ == '__main__':
    parser = c_parser.CParser()
    ast = parser.parse(text)
    dump_filename = 'ast.pickle'

    with open(dump_filename, 'wb') as f:
        pickle.dump(ast, f, protocol=pickle.HIGHEST_PROTOCOL)

    # Deserialize.
    with open(dump_filename, 'rb') as f:
        ast = pickle.load(f)
        ast.show()