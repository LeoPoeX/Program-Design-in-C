#include<stdio.h>

void main()
{
    int i = 0;
    char c;
    while(1)    //����ѭ��
    {
        c = '\0';   //��������ֵ

        while(c != 13 && c != 27)   //���̽����ַ�ֱ�����س���Esc��
        {
            c = getch();
            printf("%c\n",c);
        }
        if (c == 27)
        {
            break;     //�ж�����Esc�����˳�ѭ��
        }
        i++;
        printf("The No.is %d\n",i);
    }
    printf("The End");
}
