#include<stdio.h>
#include<stdlib.h>


int main()
{
	FILE *f_pic, *f_file, *f_finish;
	char ch, pic_name[20], file_name[20], finish_name[20];
	
	printf("��������Ҫ�ϳɵ�ͼƬ���ļ������ƣ�\n");
	printf("ͼƬ: ");
	scanf("%s", pic_name);
	printf("\n");
	
	printf("�ļ�: ");
	scanf("%s", file_name);
	printf("\n");
	
	printf("����Ϊ��");
	scanf("%s", finish_name);
	printf("\n");
	
	if( !(f_pic = fopen(pic_name, "rb")))
	{
		printf("���ܴ�ͼƬ %s!", pic_name);
		return;
	}
	if( !(f_file = fopen(file_name, "rb")))
	{
		printf("���ܴ��ļ� %s!", file_name);
		return;
	}
	
	if( !(f_finish = fopen(finish_name, "wb")))
	{
		printf("���ܴ��ļ� %s!", finish_name); 
		return;
	}
	
	while( !(feof(f_pic)))
	{
		ch = fgetc(f_pic);	//��ȡ�ַ� 
		fputc(ch, f_finish);	//�ַ����� 
	}
	fclose(f_pic);	//�ļ��ر� 
	
	while( !(feof(f_file)))
	{
		ch = fgetc(f_file);
		fputc(ch, f_finish);
	}
	fclose(f_file);	
	fclose(f_finish);
	
	system("pause");
}
