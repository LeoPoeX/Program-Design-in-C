#include<stdio.h>
#include<stdlib.h>

int main()
{
	unsigned char a, b, c;
	int n;
	
	printf("������Ҫʵ��ѭ�����Ƶ����֣�");
	scanf("%d", &a);
	printf("��������Ҫʵ�����Ƶ�λ����");
	scanf("%d", &n);
		//(sizeof(char) * 8 ��ʾ�ܳ���   
	b = a << (sizeof(char) * 8 - n);  // ʹn����ǰ�� 
	c  = a >> n;  //��nλ�⵽�˺��� ���ο�ͼ  ѭ����λ�� 
	c = c | b;
	
	printf("����ǣ�%d \n",c);
	system("pause");
	
}
