#include <stdio.h>
#include "extern_sub.h"
/**
 * 1.首先编译extern_sub.c文件
 * 2.编译extern_t.c文件
 * 3.链接(link)--> gcc -o run_main extern_sub.o extern_t.o
 * 4.运行run_main可执行程序
*/
void print_haha() 
{
    printf("haha...\n");
}