#!/bin/bash
echo '#include <stdio.h>' > program.c && echo 'int main(void) { puts("Programming is like building a multilingual puzzle"); return 0; }' >> program.c && gcc program.c && ./a.out
