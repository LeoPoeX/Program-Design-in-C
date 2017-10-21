#include<stdio.h>

void main()
{
    int a, b;
    //定义两个指针变量
    int *pointer_1, *pointer_2;

    a = 100;
    b = 200;
    //给指针变量取址
    pointer_1 = &a;
    pointer_2 = &b;

    printf("%d %d\n", a, b);
    printf("%d %d\n", *pointer_1, *pointer_2);
}
