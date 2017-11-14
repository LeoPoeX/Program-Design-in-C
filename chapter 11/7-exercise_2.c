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
	printf("  学号 \t  姓名 \t  年龄 \t  地址\n");
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
		printf("无法打开文件!\n");
		return;
	}
	
	for( i = 0; i< SIZE; i++)
	{
		fread(&stu[i], sizeof(struct student), 1, fp);
	}
	fclose(fp);
	
}
