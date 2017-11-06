#include<stdio.h>

#define PI 3.1415926
void fun(void);

int main()
{
    double s;
    int r;

    printf("请输入半径： ");
    scanf("%d", &r);

    s = PI * r * r;
    printf("\n圆的面积是 %g \n", s);

    fun();
}

void fun(void)
{
    printf("Now the PI = %g \n", PI);
    printf("PI \n");    //  PI在引号中应该是表示常量字符串，不替换
}

