#!/bin/bash
gcc -Wall -pedantic -werror -Wextra -c *.c
ar -rc liball.a *.o
rinlib liball.a
