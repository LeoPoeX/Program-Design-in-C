#include<stdio.h>

void main()
{
    int n;
    n=0;

    printf("input a string:\n");
    while  (getchar() != '\n') //得到键盘输入的字符直到回车
    {
        n++; //统计字符
    }
    printf("%d",n);
}
