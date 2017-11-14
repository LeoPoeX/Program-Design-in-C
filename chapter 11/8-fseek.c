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
	int i = 1;	//用于定位第i个结构
 	
 	if( !(fp = fopen("student-list", "r")))
 	{
		printf("无法打开文件！\n");
		return;
 	}
 	
 	rewind(fp);  //重新定义文件内部指针去到开头处
 	//从文件头第 i*sizeof(struct student)开始定位 
 	fseek(fp, i*sizeof(struct student), 0);
	//读入fp 1项到 boy 
 	fread(&boy, sizeof(struct student), 1, fp);
 	
 	printf("number\tname	age	addr\n");
 	printf("%5d\t%s  %7d      %s\n", boy.num, boy.name, boy.age, boy.addr);
 	
 	printf("\n");
 	system("pause");
}
