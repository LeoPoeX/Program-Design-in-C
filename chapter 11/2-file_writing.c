#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	 // ch ����������ַ� 
	char ch, filename[20];
	
	printf("����Ҫд����ļ���: ");
	scanf("%s", filename);
					//�ļ������򿪷�ʽ 
	if(!(fp = fopen(filename, "wt+")))
	{
		printf("���ܴ򿪳���\n");
		exit(0); //��ֹ���� 
	}
	
	printf("����������Ҫд��ľ��ӣ�");
	ch = getchar();	//���ֻ��һ�� ch = getchar(); �������ļ���һ�л�ճ��� 
	ch = getchar();
	
	while(ch != EOF)  //EOF ���ļ������ı�־ ��ݼ�ctrl + z 
	{
		fputc(ch, fp);
		ch = getchar();
	}
	
	fclose(fp);	//�ļ��ر� 

}
