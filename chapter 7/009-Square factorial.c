#include<stdio.h>

//实现平方
long square(int p);
//实现阶乘
long factorial(int q);

void main()
{

    int i;
    long s;
    s = 0;

    for(i = 2; i <= 3; i++)
    {
        s = s + square(i);
    }

    printf("s=%ld\n",s);
}

//实现平方
long square(int p)
{
    int k;
    long r;
    long factorial(int);
    k = p * p;
    r = factorial(k);
    return r;
}

//实现阶乘
long factorial(int q)
{
    long c = 1;
    int i;

    for(i = 1; i <= q; i++)
    {
        c = c * i;
    }
    return c;
}

