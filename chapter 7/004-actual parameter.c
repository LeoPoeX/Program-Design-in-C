#include<stdio.h>

void main()
{
    int f(int a, int b);    //函数声明
    int i = 2, p;

    p = f(i,++i);   //函数调用
    /*[实参求值顺序] 自左向右顺序f应为(2,3)  自右向左顺序f应为(3,3)*/
    printf("%d \n",p);
}
int f(int a,int b)
{
    int c;

    if (a > b)
    {
        c = 1;
    }
    else if (a == b)
    {
        c = 0;
    }
    else
    {
        c = -1;
    }
    return (c);
}
