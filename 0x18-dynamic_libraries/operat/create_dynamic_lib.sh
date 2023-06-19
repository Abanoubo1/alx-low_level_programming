#!/bin/bash
gcc -c *.c
gcc -shared -o 100-operations.so *.o
rm *.o
