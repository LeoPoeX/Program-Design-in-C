#include<stdio.h>

void reverse(int *x, int n);   //形参x是指针变量

int main()
{
    int i, a[10] = {2, 4, 6, 7, 3, 9, 8, 41, 13, 10};

    printf("原来的数组排列： \n");

    for(i = 0;i < 10; i++)  //排列原来数组的数
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    reverse(a, 10);

    printf("相反后的数组排列： \n");
    for(i = 0;i < 10; i++)  //排列相反后数组的数
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void reverse(int *x, int n)
{
    int *p, temp, *i, *j, m;

    m = (n - 1)/2;
    i = x;          //i指向数组的第一个元素
    j = x - 1 + n;   //j指向数组的最后一个元素
    p = x + m;      //指向中间，配对

    for( ; i <= p; i++, j--)
    {
        temp = *i;
        *i = *j;
        *j = temp;
    }
}

