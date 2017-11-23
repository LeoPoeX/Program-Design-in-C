#include<stdio.h>

void  main()
{
    long int f1,f2;
    int i;      //count
    f1 = 1;
    f2 = 1;
    for(i = 1;i <= 20;i++)      //循环20次
    {
        printf("%12ld %12ld",f1,f2);
        if(i %2 == 0)   //每4个数有个回车
        {
            printf("\n");
        }
        f1 = f1 + f2;
        f2 = f2 + f1;
    }
}
