#include<stdio.h>
#include<stdlib.h>

#define LEN 20

int main()
{
	FILE *fp;
	
	char ch, buffer[LEN];
	
	if( !(fp = fopen("rs.txt", "at+")))
	{
		printf("不能打开文件!\n");
		exit(1);
	}
	
	printf("请输入字符: ");
	fgets(buffer, LEN, stdin);	
	//scanf()遇到空格就停止了，所以用fgets
	//stdin 标准输入文件，东西存放在里面，从里面读就可以了
	
	fputs(buffer, fp);
	
	rewind(fp);	//重新定义文件内部指针去到开头处
	
	ch = fgetc(fp);
	
	while(ch != EOF)
	{
		putchar(ch);
		ch = fgetc(fp);
	}
	printf("\n");
	fclose(fp);
	 
}
