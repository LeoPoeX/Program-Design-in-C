#include<stdio.h>

#define PI 3.1415926
#define S PI * r * r

int main()
{
    double s;
    int r;

    printf("请输入半径： ");
    scanf("%d", &r);

    s = S;
    printf("\n圆的面积是 %g \n", s);

}
