#include<stdio.h>

long recursion(int n);

void main()
{
    int n;
    long result;

    printf("input a integer number:\n");
    scanf("%d",&n);

    result = recursion(n);
    printf("%d! = %ld\n", n, result);
}

long recursion(int n)
{
    //定义临时结果
    long temp_result;

    if (n < 0)
    {
        printf("n < 0,input error! \n");
    }
    else if (n == 0 || n == 1)
    {
        temp_result = 1;
    }
    else
    {
        temp_result = recursion(n - 1) * n;
    }
    return (temp_result);
}

