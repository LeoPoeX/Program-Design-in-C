#include<stdio.h>

int main()
{
	char ch, n;
	
	printf("请输入一个字母：\n");
	ch = getchar();
	n = getchar();	//得到的是回车，这样出错不会得到两句 “输入错误” 
	
	while( !(ch > 'A' && ch < 'z') || (ch > 'Z' && ch < 'a'))
	{
		printf("输入错误，请重新输入一个字母：\n");
		ch = getchar();
	}
	if (ch & 32)
	{
		ch = ch & 223;	//使第五位为0，变成大写 
	}
	else
	{
		ch = ch | 255;	//使第五位为1，变成小写 
	}
	
	putchar(ch);
	printf("\n");
	
}
