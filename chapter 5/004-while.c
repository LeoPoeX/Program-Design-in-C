#include<stdio.h>

void main()
{
    int a=0,n;

    printf("\n input n: ");
    scanf("%d",&n);

    while (n--)
    {
        printf("%d",a++*2);  //a++*2 �൱��a*2;a++
    }
}
