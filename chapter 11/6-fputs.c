#include<stdio.h>
#include<stdlib.h>

#define LEN 20

int main()
{
	FILE *fp;
	
	char ch, buffer[LEN];
	
	if( !(fp = fopen("rs.txt", "at+")))
	{
		printf("���ܴ��ļ�!\n");
		exit(1);
	}
	
	printf("�������ַ�: ");
	fgets(buffer, LEN, stdin);	
	//scanf()�����ո��ֹͣ�ˣ�������fgets
	//stdin ��׼�����ļ���������������棬��������Ϳ�����
	
	fputs(buffer, fp);
	
	rewind(fp);	//���¶����ļ��ڲ�ָ��ȥ����ͷ��
	
	ch = fgetc(fp);
	
	while(ch != EOF)
	{
		putchar(ch);
		ch = fgetc(fp);
	}
	printf("\n");
	fclose(fp);
	 
}
