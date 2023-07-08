#!/bin/bash
gcc -Wall Werror -pedantic -Wextra -c *.c
ar rc liball.a *.o
chmod u+x create_static_lib
