#include<stdio.h>

#define PI 3.1415926

int main()
{
    double s;
    int r;

    printf("请输入半径： ");
    scanf("%d", &r);

    s = PI * r * r;
    printf("\n圆的面积是 %g \n", s);
}
