#include<stdio.h>
#include<stdlib.h>

struct student
{
	int num;
	char name[10];
	int age;
	char addr[15];
}boy;

int main()
{
	FILE *fp;
	int i = 1;	//���ڶ�λ��i���ṹ
 	
 	if( !(fp = fopen("student-list", "r")))
 	{
		printf("�޷����ļ���\n");
		return;
 	}
 	
 	rewind(fp);  //���¶����ļ��ڲ�ָ��ȥ����ͷ��
 	//���ļ�ͷ�� i*sizeof(struct student)��ʼ��λ 
 	fseek(fp, i*sizeof(struct student), 0);
	//����fp 1� boy 
 	fread(&boy, sizeof(struct student), 1, fp);
 	
 	printf("number\tname	age	addr\n");
 	printf("%5d\t%s  %7d      %s\n", boy.num, boy.name, boy.age, boy.addr);
 	
 	printf("\n");
 	system("pause");
}
