#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	 // ch ����������ַ� 
	char ch, filename[20];
	
	printf("����Ҫд����ļ���: ");
	scanf("%s", filename);
					//�ļ������򿪷�ʽ 
	if(!(fp = fopen(filename, "r")))
	{
		printf("���ܴ򿪳���\n");
		exit(0); //��ֹ���� 
	}
	
	while(ch != EOF)  //EOF ���ļ������ı�־ ��ݼ�ctrl + z 
	{
		ch = fgetc(fp);
		putchar(ch);	//����ַ�
	}
	
	printf("\n");
	
	fclose(fp);	//�ļ��ر� 

}
