#include<stdio.h>

void main()
{
    int n;
    n=0;

    printf("input a string:\n");
    while  (getchar() != '\n') //�õ�����������ַ�ֱ���س�
    {
        n++; //ͳ���ַ�
    }
    printf("%d",n);
}
