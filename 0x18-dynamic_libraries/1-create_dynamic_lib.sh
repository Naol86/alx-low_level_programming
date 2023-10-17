#!/bn/bash
gcc -Wall -Waxtra -pedantic -c -fPIC *.c
gcc -shared -0 liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
