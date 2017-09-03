#include<stdio.h>

void main()
{
    int i,a[5] = {3,4,5},b[5];

    printf("\n array a is: ");
    for(i = 0;i < 5;i++)
    {
        printf("%6d",a[i]);
    }
    printf(" \n array b is: ");
    for(i = 0;i < 5;i++)
    {
        printf("%6d",b[i]);     //There's no assignment, and the result is messy code
    }
}
