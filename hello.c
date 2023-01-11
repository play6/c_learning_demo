#include<stdlib.h>
#include<stdio.h>

int main()
{
    // printf("hello world\n");
    // ptr++; //改变了ptr的首地址
    // return 0;
    int *ptr;
    ptr = (int*)malloc(100*1024);

    free(ptr); 
    free(ptr);

    // ptr++;
    return 0;


}