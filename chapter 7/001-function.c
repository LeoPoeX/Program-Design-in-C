#include<stdio.h>

void main()
{
    void printstar();       //��printstar��������
    void print_message();   //��print_message��������

    printstar();            //����printstar����
    print_message();        //����print_message����
    printstar();            //����printstar����
}

void printstar()        //����printstar����
{
    printf("************** \n");
}

void print_message()    //����print_message����
{
    printf("hello,good bye! \n");
}
