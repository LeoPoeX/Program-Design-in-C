#include<stdio.h>
#include<malloc.h>

struct student *tj(struct student *head);
struct student *cr(struct student *head);
void xs(struct student *head);

struct student  
{  
    int num;
    double score;
    struct student *next;
};

int main()
{
	char a;
	struct student *head = NULL, *p;
	p = head;

    printf("是否输入(y/n)?");
    scanf("%c", &a);

    while(a == 'Y' || a == 'y'){
        head = tj(head);
        xs(head);
        
		p = cr(head);
	    xs(p);
	    
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
	
	printf("请输入学号：");
	scanf("%d", &p -> num);
	
	printf("请输入成绩：");
	scanf("%lf", &p -> score);

	p -> next = NULL;

}

	//插入 
struct student *cr(struct student *head)
{
	struct student *p, *p1 = head, *p2;
	p = (struct student *)malloc(sizeof(struct student));
	int n;
	n = p1 ->num;
	
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
		printf("请输入要插入的学号：");
		scanf("%d", &p ->num);
		printf("请输入要插入的成绩：");
		scanf("%lf", &p ->score);
	
		while((p1 -> num < p -> num) && (p1 -> next != NULL))
		{
			p2 = p1;
			p1 = p1 -> next;
		}
		if(p1 -> num >= p -> num)
		{
			if(p1 == head)	//为头节点，新建节点插入头节点前 
			{
				p -> next = head;
				head = p;
			}
			else	//普通情况 
			{
				p2 = p1;
				p -> next = p1 -> next;	//新节点指向原节点的下一个 
				p1 -> next = p;	//当前节点指向新节点 
			}
		}
		else	//位于结尾 
		{
			p1 -> next = p;
			p -> next = NULL;
		}
	}
	
	return head;
	
}

	//打印 
void xs(struct student *head)
{
	struct student *p = head;
	int j = 1;
	
	while(p != NULL)	//如果p不为空，输出 
	{
		printf("  %d\t%d\t%5.2f\n", j, p->num, p->score);
		p = p -> next;
		j++;
	}
	
}
