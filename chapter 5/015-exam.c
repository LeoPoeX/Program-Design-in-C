#include<stdio.h>

void  main()
{
    long int f1,f2;
    int i;      //count
    f1 = 1;
    f2 = 1;
    for(i = 1;i <= 20;i++)      //ѭ��20��
    {
        printf("%12ld %12ld",f1,f2);
        if(i %2 == 0)   //ÿ4�����и��س�
        {
            printf("\n");
        }
        f1 = f1 + f2;
        f2 = f2 + f1;
    }
}
