#include<stdio.h>
#include<stdlib.h>

int main()
{
	unsigned char a, b, c;
	int n;
	
	printf("请输入要实现循环右移的数字：");
	scanf("%d", &a);
	printf("请输入需要实现右移的位数：");
	scanf("%d", &n);
		//(sizeof(char) * 8 表示总长度   
	b = a << (sizeof(char) * 8 - n);  // 使n到了前面 
	c  = a >> n;  //除n位外到了后面 【参考图  循环移位】 
	c = c | b;
	
	printf("结果是：%d \n",c);
	system("pause");
	
}
