#include<stdio.h>

//ʵ��ƽ��
long square(int p);
//ʵ�ֽ׳�
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

//ʵ��ƽ��
long square(int p)
{
    int k;
    long r;
    long factorial(int);
    k = p * p;
    r = factorial(k);
    return r;
}

//ʵ�ֽ׳�
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

