#include<stdio.h>

void main()
{
    char a;
    scanf("%c",&a);
    a= a>='A' && a<='Z' ? (a+32) : a;
    printf("%c\n",a);
}
