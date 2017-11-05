#include<stdio.h>
    //比较a和b的大小，求大值

#if(1)  //预编译
int main()
{
    int max(int x, int y);
    int a, b, c;

    printf("输入a，b两个数的值：");
    scanf("%d %d", &a, &b);
    printf("\n");
    c = max(a, b);

    printf("a = %d  \nb = %d  \nmax = %d \n", a, b, c);
}
#endif

int max(int x, int y)
{
    int z;

    if(x > y)
    {
        z = x;
    }
    else
    {
        z = y;
    }
    return z;
}

#if(0)
    //蒋字符函数改为指针
int main()
{
    int max(int x, int y);
    int (*p)();
    int a, b, c;

    p = max;
    printf("输入a，b两个数的值：");
    scanf("%d %d", &a, &b);
    printf("\n");

    c = (*p)(a, b);

    printf("a = %d  \nb = %d  \nmax = %d \n", a, b, c);

}
#endif

