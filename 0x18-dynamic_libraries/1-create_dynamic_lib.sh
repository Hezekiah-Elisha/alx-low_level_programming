#!/bin/bash
gcc *.c -Wall -c -fPIC
gcc *.o -shared -o libdynamic.so
