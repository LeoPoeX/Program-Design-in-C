#include<stdio.h>
#include<malloc.h>

struct student *tj(struct student *head);
void xs(struct student *head);
struct student  
{  
    int num;
    struct student *next;
};

int main()
{
	char a;
	struct student *head = NULL;

    printf("是否输入(y/n)?");
    scanf("%c", &a);

    while(a == 'Y' || a == 'y'){
        head = tj(head);
        xs(head);
        printf("是否输入(y/n)?");
        scanf(" %c", &a);
    }

    return 0;
}

	//添加 
struct student *tj(struct student *head)
{
	struct student *p, *p1;
	p1 = head;
	int num;
	
	p = (struct student *)malloc(sizeof(struct student));
	if (p == NULL)
	{
		printf("无法读取文件");
		exit(0);
	}
	if (head == NULL)	//如果头指针为空 
	{
		head = p;
	}
	else
	{
		while(p1 ->next != NULL)	//如果p1尾不为空 
		{
			p1 = p1 -> next;	//p1指向下一个直到结尾 
		}
		p1 -> next = p;
	}
	printf("请输入数：");
	scanf("%d", &num);
	
	p -> num = num;
	p -> next = NULL;
	
	return head;
}

	//打印 
void xs(struct student *head)
{
	struct student *p = head;
	int j = 1;
	
	while(p != NULL)	//如果p不为空，输出 
	{
		printf("  %d\t%d\n", j, p->num);
		p = p -> next;
		j++;
	}
	
}
