#include<stdio.h>

void main()
{
    void printstar();       //对printstar函数声明
    void print_message();   //对print_message函数声明

    printstar();            //调用printstar函数
    print_message();        //调用print_message函数
    printstar();            //调用printstar函数
}

void printstar()        //定义printstar函数
{
    printf("************** \n");
}

void print_message()    //定义print_message函数
{
    printf("hello,good bye! \n");
}
