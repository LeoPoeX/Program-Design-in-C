#include<stdio.h>

void main()
{
    int a;

    printf("input a  year: ");
    scanf("%d",&a);

    if((a%4==0 && a%100!=0 )||(a%400==0))
    {
        printf("%d是闰年",a);
    }
    else
    {
        printf("%d不是闰年",a);
    }
}
