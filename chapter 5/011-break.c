#include<stdio.h>

void main()
{
    int i = 0;
    char c;
    while(1)    //设置循环
    {
        c = '\0';   //变量赋初值

        while(c != 13 && c != 27)   //键盘接收字符直到按回车或Esc键
        {
            c = getch();
            printf("%c\n",c);
        }
        if (c == 27)
        {
            break;     //判断若按Esc键则退出循环
        }
        i++;
        printf("The No.is %d\n",i);
    }
    printf("The End");
}
