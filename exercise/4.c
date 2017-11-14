#include<stdio.h>

int main()
{
    int n, i, m;

    //输入一个自然数
    printf("enter an number: ");
    scanf("%d", &n);


    printf("%d^3 = ", n);
    for(i = 0; i < n; i++)
    {
        m = n * (n - 1) + 1 + 2 * i;
        printf("%d ", m);

    }


}
