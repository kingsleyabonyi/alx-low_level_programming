#!/bin/bash
cc main.o -L. -litil -o prog
ar rc libmy.a *.o
ranlib libmy.a
