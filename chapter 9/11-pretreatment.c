#include<stdio.h>

#define ROUND 1
#define PI 3.1415926

int main()
{
    int r;
    double s;

    printf("输入一个数: ");
    scanf("%d", &r);

#if ROUND   //ROUND 为0时求正方形的面积 为1时求圆的面积
    s = r * r * PI;
    printf("圆的面积是：%6.5f\n", s);
#else
    s = r * r;
    printf("正方形的面积：%6.5f\n", s);
#endif // ROUND

}
