#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	// ע��Ҫ˫ '\\'
	if (!(fp = fopen("F:\\open.txt", "w")))
	{
		printf("Can not open F:\\open file! \n");
		system("pause");
	}
	else
	{
		printf("Open success! \n");
	}
}
