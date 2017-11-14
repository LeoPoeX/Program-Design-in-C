#include<stdio.h>

int main()
{
	unsigned char a = -2;   //逻辑移位，去掉un是算术移位 
	a = a >> 1;
	
	printf("%d \n", a);
}
