#include<stdio.h>

void reverse(int x[], int n);   //形参x是数组名

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

void reverse(int x[], int n)
{
    int temp, i, j, m;

    m = (n - 1)/2;

    for( i = 0; i <= m; i++)
    {
        j = n - 1 - i;  //指向对应的元素

        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
    }
}
