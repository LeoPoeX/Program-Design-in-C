#include<stdio.h>

int fac(int n)  //n == i
{
    static int f = 1;
    f = f * n;  //1; 2; 2*3; 6*4; 24*5

    return (f); //1,2,6,24,120
}

void main()
{
    int i;
    for(i = 1;i <= 5;i++)
    {
        printf("%d! = %d\n",i,fac(i));  /*i(1,2,3,4,5) fac(i)[1,2,6,24,120]*/
    }
}
