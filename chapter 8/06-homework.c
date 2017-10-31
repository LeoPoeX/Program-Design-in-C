#include<stdio.h>

int main()
{
    int *p, i, a[10];
    p = a;

    for(i = 0; i < 10; i++)
    {
        scanf("%d",p++);
    }
    printf("\n");
    p = a;      //在第一次输入数组元素后p就指向最后一个数组元素的下一个地址了，所以要在输出之前再加上一个p=a；语句重新将p指向a[0]
    for(i = 0; i < 10; i++, p++)
    {
        printf("%d ",*p);
    }
}
