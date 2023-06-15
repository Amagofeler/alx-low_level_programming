#!/bin/bash
echo '#include <stdio.h>' > tmp.c; echo 'int main(void) { puts("\"Programming is like building a multilingual puzzle"); return (0); }' >> tmp.c; gcc tmp.c -o tmp; ./tmp; rm tmp tmp.c
