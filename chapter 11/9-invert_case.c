#include<stdio.h>

int main()
{
	char ch, n;
	
	printf("������һ����ĸ��\n");
	ch = getchar();
	n = getchar();	//�õ����ǻس�������������õ����� ��������� 
	
	while( !(ch > 'A' && ch < 'z') || (ch > 'Z' && ch < 'a'))
	{
		printf("�����������������һ����ĸ��\n");
		ch = getchar();
	}
	if (ch & 32)
	{
		ch = ch & 223;	//ʹ����λΪ0����ɴ�д 
	}
	else
	{
		ch = ch | 255;	//ʹ����λΪ1�����Сд 
	}
	
	putchar(ch);
	printf("\n");
	
}
