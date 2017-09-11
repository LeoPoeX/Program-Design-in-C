#include<stdio.h>

void main()
{
    int max(int x ,int y);  //形参   对max函数的声明
    int a ,b ,c ;

    scanf("%d,%d", &a,&b);
    c = max(a ,b);  //实参

    printf("Max is %d",c);
}

int max(int x,int y)
{
    int z;
    z = x > y ? x : y;
    /* if (x > y)
        {
            z = x;
        }
        else
        {
            z = y;
        }  */
    return z;
}
