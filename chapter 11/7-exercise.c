#include<stdio.h>

#define SIZE 4

struct student
{
	int num;
	char name[10];
	int age;
	char addr[15];
}stu[SIZE];

void save()
{
	FILE *fp;
	int i;
	
	if( !(fp = fopen("student-list", "wb")))
	{
		printf("�޷����ļ�!\n");
		return;
	}
	for(i = 0; i < SIZE; i++)
	{
		if (fwrite(&stu[i], sizeof(struct student), 1, fp) != 1)
		{
			printf("�ļ�д�����\n");
			fclose(fp);
		}
	}
} 

int main()
{
	int i;
	printf("������ ѧ�� ���� ���� ��ַ��\n");
	for(i = 0; i < SIZE; i++)
	{
		scanf("%d %s %d %s", &stu[i].num, &stu[i].name, &stu[i].age, &stu[i].addr);
		
	}
	save();
	
}
