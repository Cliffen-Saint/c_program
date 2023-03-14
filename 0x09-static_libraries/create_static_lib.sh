#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar -rc liball.a *.o
gcc *.c -L. -lall -o main
