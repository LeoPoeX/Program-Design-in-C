#include<stdio.h>

int main()
{
	char a, b, c, d;
	
	printf("请输入待检验的数：");
	scanf("%d", &a);
	
	b = a >> 2;
	c = ~(~0 << 4);
	d = b & c;
	
	printf("%d \n", d);
}
