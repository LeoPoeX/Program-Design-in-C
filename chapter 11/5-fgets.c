#include<stdio.h>
#include<stdlib.h>

#define LEN 65

int main()
{
	FILE *fp;
	
	char buffer[LEN];
	
	if( !(fp = fopen("rs.txt", "rt")))
	{
		printf("不能打开文件! \n");
		exit(1);
	}
 	fgets(buffer, LEN, fp);
 	
 	printf("%s \n", buffer);
 	printf("\n");
 	fclose(fp);
	
}
