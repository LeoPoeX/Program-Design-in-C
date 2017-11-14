#include<stdio.h>

#define SQ(y) (y) * (y)

int main()
{
    int a, sq;

    printf("输入一个数： ");
    scanf("%d", &a);

    sq = 160 / (SQ(a + 1));   // sq = 160 / ((a + 1) * (a + 1))

    printf("sq = %d \n", sq);
}
