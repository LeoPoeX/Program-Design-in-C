#include <stdio.h>

int main()
{
	int num, n[5], s = 0;

	//����5λ���ڵ��� 
	printf("Enter a number of five: ");
	scanf("%d", &num);

	//�����Ǽ�λ�� 
	while(num)
	{
		n[s++] = num % 10;
		num /= 10;
	}
	printf("%d count \n", s);

	//˳����� 
	int i;
	printf("order: \n");
	for(i = s - 1; i >= 0; i--)
	{
		printf("%d ",n[i]);
	}
	printf("\n");

	//�������+- 
	printf("reversed order: \n");
	for(i = 0; i < s; i++)
	{
		printf("%d ", n[i]);
	}
	printf("\n");

	return 0;
}
