#include <stdio.h>

struct
{
	int num;
	char name[10];
	char sex;
	char job;
	union
	{
		int banji;
		char position[10];
	}category;
}person[2];	//为了方便假设一个学生一个老师 

int main()  
{  
        int i;  
        for(i=0; i<2; i++)  
        {  
                printf("Please input the num: ");  
                scanf("%d", &person[i+1].num);  
                printf("Please input the name: ");  
                scanf("%s", &person[i+1].name);  
                while(getchar() != '\n')  
                {  
                        ;  
                }  
                printf("Please input the sex(M/F): ");  
                scanf("%c", &person[i+1].sex);  
                while(getchar() != '\n')  
                {  
                        ;  
                }  
                printf("Please input the job(s/t): ");  
                scanf("%c", &person[i+1].job);  
                while(getchar() != '\n')  
                {  
                        ;  
                }  
                if(person[i+1].job == 's')  
                {  
                        printf("Please input the class: ");  
                        scanf("%d", &person[i+1].category.banji);  
                }  
                else if(person[i+1].job == 't')  
                {  
                        printf("Please input the position: ");  
                        scanf("%s", &person[i+1].category.position);  
                }  
                else  
                {  
                        printf("输入错");  
                }  
                putchar('\n');  
        }  
  
        printf("No.\tname\tsex\tjob\tclass/position\n");  
        for(i=0; i<2; i++)  
        {  
                if(person[i+1].job == 's')  
                {  
                        printf("%d\t%s\t%c\t%c\t%d\n",  
                                person[i+1].num,  
                                person[i+1].name,  
                                person[i+1].sex,  
                                person[i+1].job,  
                                person[i+1].category.banji);  
                }  
                else if(person[i+1].job == 't')  
                {  
                        printf("%d\t%s\t%c\t%c\t%s\n",  
                                person[i+1].num,  
                                person[i+1].name,  
                                person[i+1].sex,  
                                person[i+1].job,  
                                person[i+1].category.position);  
                }  
        }  
}  
