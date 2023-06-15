#!/bin/bash
echo '#include <unistd.h>' > tmp.c; echo 'int main(void) { return (write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59) != 59); }' >> tmp.c; gcc tmp.c -o tmp; ./tmp; rm tmp tmp.c
