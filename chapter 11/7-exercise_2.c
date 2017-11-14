#include<stdio.h>

#define SIZE 4

struct student
{
	int num;
	char name[10];
	int age;
	char addr[15];
}stu[SIZE];

void load();
int main()
{
	int i;
	load();
	printf("  ѧ�� \t  ���� \t  ���� \t  ��ַ\n");
	for(i = 0; i < SIZE; i++)
	{
		printf("%5d %10s %5d %10s\n", stu[i].num, stu[i].name, stu[i].age, stu[i].addr);
		
	}
	
}

void load()
{
	FILE *fp;
	int i;
	
	if( !(fp = fopen("student-list", "r")))
	{
		printf("�޷����ļ�!\n");
		return;
	}
	
	for( i = 0; i< SIZE; i++)
	{
		fread(&stu[i], sizeof(struct student), 1, fp);
	}
	fclose(fp);
	
}
