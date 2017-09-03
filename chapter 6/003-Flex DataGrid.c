#include<stdio.h>

void main()
{
    int i,max,a[10];

    printf("input 10 numbers: \n");

    for(i = 0;i < 10;i++)
        scanf("%d",&a[i]);

    max = a[0];

    for(i = 1;i < 10;i++)       //make a comparison
        if(a[i] > max)  //Calculate the maximum number
    {
        max = a[i];
    }
    printf("maxmum=%d\n",max);
}
