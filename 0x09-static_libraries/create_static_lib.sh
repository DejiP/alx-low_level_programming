#!/bin/bash

# creates a static library
# from .c files
# in the current directory

gcc -c *.c
ar rc liball.a *.o
echo y | rm -I *.o
