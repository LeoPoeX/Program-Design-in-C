#include<conio.h>   //后边getch函数和putch函数需要

void main()
{
    char ch;

    for( ; ; )
    {
        ch = getch();   //字符输入函数

        if (ch == 27)   //Esc键的ACSII码是27
            break;      //退出函数

        if (ch == 13)
            continue;   //按的是Enter键，跳过字符输出语句
        putch(ch);      //显示输入的字符
        putch('\n');
    }
    getch();            //让程序停一下，拍任意键继续
}
