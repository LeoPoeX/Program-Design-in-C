
/*设一个函数process，在调用它的时候，每次实现不同的功能
    输入a b 两个数
    第一次调用process时找出a b中最大值
    第二次调用process时找出a b中最小值
    第三次调用process时找出a b的和
*/

#include<stdio.h>

int main()
{
    int max(int , int );
    int min(int , int );
    int sum(int , int );

    int process(int , int , int (*fun)());

    int a, b;

    printf("输入a和b： ");
    scanf("%d %d", &a, &b);
    printf("\n");

    int i, k, j;
    i = process(a, b, max);
    k = process(a, b, min);
    j = process(a, b, sum);

    printf("max = %d \n", i);


    printf("min = %d \n", k);


    printf("sum = %d \n", j);


}

int max(int x, int y)
{
    int z;

    if (x > y)
    {
        z = x;
    }
    else
    {
        z = y;
    }

    return z;
}

int min(int x, int y)
{
    int z;

    if (x > y)
    {
        z = y;
    }
    else
    {
        z = x;
    }

    return z;
}

int sum(int x, int y)
{
    int z;

    z = x + y;
    return z;
}

int process(int x, int y, int (*fun)())
{
    return (*fun)(x, y);
}
