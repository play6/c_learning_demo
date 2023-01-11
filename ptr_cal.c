#include <stdio.h>

int main() 
{
    // 指针的运算
    short int* ptr;
    ptr = (short int*)0x1234;
    ptr = ptr + 2 ;
    printf("ptr's address is 0x%x\n",ptr);



}