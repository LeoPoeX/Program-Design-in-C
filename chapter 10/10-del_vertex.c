#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

#define LEN sizeof(struct student)	//student结构的大小

struct student *creat(); //创建链表
struct student *del( struct student *head, int num);
// del函数用于删除结点，*head即链表的头指针，num要删除的结点num 

void print(struct student *head);  //打印链表

struct student
{
	int num;
	float score;
	struct student *next;
};

int n;	//全局变量，用来记录存放了多少数据 

int main(int argc, char *argv[])
{
	struct student *stu, *p;
	
	stu = creat();
	p = stu;
	print( p );

	printf("请输入需要删除的学号：");
	scanf("%d", &n);
	print( del(p, n) );
	
	printf("\n"); 
	system("pause");

	return 0;
}

struct student *creat()
{
	struct student *head;
	struct student *p1, *p2;
	
	//LEN是student结构的大小 
	p1 = p2 = (struct student *)malloc(LEN); 
	
	printf("请输入学号：");
	scanf("%d", &p1 -> num);
	printf("请输入分数: ");
	scanf("%f", &p1 -> score);
	
	head = NULL;
	n = 0; 
	
	while( p1 -> num )  //p1的num不等于0 
	{
		n++;
		if(1 == n)
		{
			head = p1;
		}
		else  //不等于1 
		{
			p2 -> next = p1;
		}
		p2 = p1;
		//再创建一个链表 
		p1 = (struct student *)malloc(LEN);
		
		printf("\n请输入学号：");
		scanf("%d", &p1 -> num);
		printf("请输入分数: ");
		scanf("%f", &p1 -> score);
	}
	p2 ->next = NULL;
	
	return head;
}

void print(struct student *head)
{
	struct student *p;
	
	printf("\n总共有 %d 个记录!\n\n", n);
	
	p = head;
	
	if(head != NULL) 
	{
		do
		{
			printf("学号是 %d 的成绩是： %5.2f \n", p ->num, p->score);		
			p = p -> next;
		}while( p != NULL);
	}
	
}

struct student *del(struct student *head, int num)
{
	struct student *p1, *p2;
	
	if( NULL == head )	//如果头结点指向NULL，这是个空链表
	{
		printf("\n这是个空链表\n");
		goto END;
	} 
	
	p1 = head;
	while(p1 -> num != num && p1 -> next != NULL)
	{
		p2 = p1;
		p1 = p1 -> next;
	}
	
	if(num == p1 -> num)
	{
		if(p1 == head)	//当将要删除的结点位于头结点的时候 
		{
			head = p1 -> next;
		}
		else		//一般情况 
		{
		//相当于 A -> B -> C ,删掉B， A -> C 
			p2 ->next = p1 ->next;	  
		}
		printf("\n删除No. %d 成功！\n", num);
		n = n -1;  //n是作为一个全局变量，用来记录链表的数据数 
	}
	else
	{
		printf("%d 没有找到！\n", num);
	}
	
END:
	 return head; 

}
