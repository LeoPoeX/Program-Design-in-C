#include<stdio.h>

void main()
{
    int max(int x ,int y);  //�β�   ��max����������
    int a ,b ,c ;

    scanf("%d,%d", &a,&b);
    c = max(a ,b);  //ʵ��

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
