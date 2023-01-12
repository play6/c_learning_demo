#include <stdio.h>
#include <stdlib.h>
/**
 * exit()函数作用探索
 * exit()-->用来终止整个程序的运行
 * 
*/

void print_hello()
{
    printf("begin我在测试exit()的特性...\n");
    exit(EXIT_SUCCESS);
    printf("end我在测试exit()的特性...\n");
}


int main()
{
    print_hello();
    printf("main() is running***");
    return 0;
}