#include<stdio.h>

#define MAX(a,b) (a > b)? a : b

int main()
{
    int x, y, max;

    printf("输入两个数： ");
    scanf("%d %d", &x, &y);

    printf("\n");
    max = MAX(x, y);

    printf("最大值是： %d \n", max);
}
