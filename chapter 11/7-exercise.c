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
		printf("无法打开文件!\n");
		return;
	}
	for(i = 0; i < SIZE; i++)
	{
		if (fwrite(&stu[i], sizeof(struct student), 1, fp) != 1)
		{
			printf("文件写入错误！\n");
			fclose(fp);
		}
	}
} 

int main()
{
	int i;
	printf("请输入 学号 姓名 年龄 地址：\n");
	for(i = 0; i < SIZE; i++)
	{
		scanf("%d %s %d %s", &stu[i].num, &stu[i].name, &stu[i].age, &stu[i].addr);
		
	}
	save();
	
}
