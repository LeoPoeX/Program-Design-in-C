#include<conio.h>   //���getch������putch������Ҫ

void main()
{
    char ch;

    for( ; ; )
    {
        ch = getch();   //�ַ����뺯��

        if (ch == 27)   //Esc����ACSII����27
            break;      //�˳�����

        if (ch == 13)
            continue;   //������Enter���������ַ�������
        putch(ch);      //��ʾ������ַ�
        putch('\n');
    }
    getch();            //�ó���ͣһ�£������������
}
