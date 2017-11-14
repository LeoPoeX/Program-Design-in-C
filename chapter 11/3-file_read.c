#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	 // ch 接受输入的字符 
	char ch, filename[20];
	
	printf("输入要写入的文件名: ");
	scanf("%s", filename);
					//文件名，打开方式 
	if(!(fp = fopen(filename, "r")))
	{
		printf("不能打开程序！\n");
		exit(0); //终止程序 
	}
	
	while(ch != EOF)  //EOF 是文件结束的标志 快捷键ctrl + z 
	{
		ch = fgetc(fp);
		putchar(ch);	//输出字符
	}
	
	printf("\n");
	
	fclose(fp);	//文件关闭 

}
