#!/bin/bash
gcc -c *.c
gcc -shared -o queue.so *.o
rm *.o
