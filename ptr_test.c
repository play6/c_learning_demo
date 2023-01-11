#include<stdio.h>

void increment(int* p);

int main() 
{
    // 声明一个指针
    // int * ptr1;
    // int * ptr2;
    // int* ptr3;
    int num = 123;
    // & 运算符用作取出一个变量所在的内存地址
    increment(&num);

    int i = 569;
    // & 与 * 互为逆运算
    if (i == *(&i)) {
        printf("i 是%d\n", *(&i));
    }

    printf("num is %d\n",num);
    // printf("num's address is %p\n", &num);
    return 0;
}

void increment(int* p) {
    *p = *p + 1;
}

