#include<stdio.h>

int main()
{
    int a[10];
    int i;

    printf("输入10个整数： \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);     //输入十个元素
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);    //输入各元素
    }


}
