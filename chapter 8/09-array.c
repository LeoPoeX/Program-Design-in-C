#include<stdio.h>

void sort(int x[], int n);  //由大到小排序

int main()
{
    int *p, i, a[10] = {3, 7, 5, 11, 9, 4, 8, 21, 20, 1};

    printf("原来的数组排序： \n");

    for (i = 0; i < 10; i++)    //输出数组的每个元素
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    printf("\n");

    p = a;
    sort(p, 10);

    printf("由大到小排序： \n");

    for (i = 0; i < 10; i++)    //输出数组的每个元素
    {
        printf("%d ", *p);
        p++;
    }

    printf("\n");
}

void sort(int x[], int n)   //由大到小排序
{
    int i, j, t;

    for(i = 0; i < n - 1; i++)  //数组第1位到第9位
    {
        for(j = i + 1; j < n; j++)  //数组第2位到第10位
        {
            if (x[j] > x[i])    //逐个对比大小
            {
                t = x[j];
                x[j] = x[i];
                x[i] = t;
            }
        }
    }
}

