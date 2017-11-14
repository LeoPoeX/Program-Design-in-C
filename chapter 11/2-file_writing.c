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
	if(!(fp = fopen(filename, "wt+")))
	{
		printf("不能打开程序！\n");
		exit(0); //终止程序 
	}
	
	printf("请输入你想要写入的句子：");
	ch = getchar();	//如果只有一个 ch = getchar(); 创建的文件第一行会空出来 
	ch = getchar();
	
	while(ch != EOF)  //EOF 是文件结束的标志 快捷键ctrl + z 
	{
		fputc(ch, fp);
		ch = getchar();
	}
	
	fclose(fp);	//文件关闭 

}
