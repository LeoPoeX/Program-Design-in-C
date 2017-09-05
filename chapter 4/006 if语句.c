#include<stdio.h>

void main()
{
    int a,b,c,t;
    printf("input three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
        {t=a,a=b,b=t;}
    else if (a>c)
        {t=a,a=c,c=t;}
    else if (b>c)
        {t=b,b=c,c=t;}
    printf("small to big : %d %d %d ",a,b,c);
}
