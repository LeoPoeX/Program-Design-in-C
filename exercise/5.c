#include <stdio.h>

int main()
{
	int num, n[5], s = 0;

	//输入5位以内的数 
	printf("Enter a number of five: ");
	scanf("%d", &num);

	//计算是几位数 
	while(num)
	{
		n[s++] = num % 10;
		num /= 10;
	}
	printf("%d count \n", s);

	//顺序输出 
	int i;
	printf("order: \n");
	for(i = s - 1; i >= 0; i--)
	{
		printf("%d ",n[i]);
	}
	printf("\n");

	//逆序输出+- 
	printf("reversed order: \n");
	for(i = 0; i < s; i++)
	{
		printf("%d ", n[i]);
	}
	printf("\n");

	return 0;
}
