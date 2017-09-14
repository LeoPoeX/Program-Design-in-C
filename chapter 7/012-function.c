#include<stdio.h>

void test(int v);

void main()
{
    int a[10] = {1, 2, 3, 4, -1, -2, -3, -4, 2, 3};
    int i;

    for(i = 0; i < 10; i++)
    {
        test(a[i]);
    }
    printf("\n");
}

void test(int v)
{
    //大于0输出该值
    if (v > 0)
    {
        printf("%d\n",v);
    }
    else
    {
        printf("%d\n",0);
    }
}
