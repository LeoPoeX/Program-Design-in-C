#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

#define LEN sizeof(struct student)	//student结构的大小 

//创建链表
struct student *creat();

//修改结点
struct student *modi(struct student *head); 

// del函数用于删除结点，*head即链表的头指针
struct student *del(struct student *head);

//按姓名查询
struct student *inqu(struct student *head);

//按平均成绩排序
struct student *sort(struct student *head); 

//打印链表
void print(struct student *head);

  //定义结构体 
struct student
{
	char ID[20];
	char name[10];
	float score1;
	float score2;
	float score3;
	float Average;
	struct student *next;
};

struct student stu;

  //求平均值 
float avg(struct student stu)
{
	return (stu.score1 + stu.score2 + stu.score3) / 3;
}

	//创建链表 
struct student *creat()
{
	struct student *head = NULL;
	struct student *p;
	float sum;
	
	while(1)		//无限循环 
	{
		p=(struct student *)malloc(LEN);
		
		if (!p)
		{
			printf("内存分配失败！");
			return NULL;
		}
		
		printf("请输入学号：");
		scanf("%s", &p -> ID);
		getchar();
		
		printf("请输入姓名：");
		scanf("%s", &p -> name);
		getchar();
		
		printf("请输入成绩：");
		scanf("%f", &p ->score1);
		getchar();
		
		printf("请输入成绩：");
		scanf("%f", &p ->score2);
		getchar();
		
		printf("请输入成绩：");
		scanf("%f", &p ->score3);
		getchar();
		
		sum = p->score1 + p->score2 + p->score3;
		p -> Average = (float)(sum / 3);
		
		printf("是否继续(y/n)：");
		if(getchar() == 'n')
		{
			break;
		}
		
		p -> next = head;
	}
	return head;
	 
}
	//修改结点 
struct student *modi(struct student *head)
{
	char id[20];
	struct student *p, *q;
	float sum;
	
	printf("请输入要修改的学生学号：");
	scanf("%s", &id);
	
	q = p = head;	//赋值
	
		//找不到学号或指针为空 
	while(p != NULL && strcmp(p -> ID, id))
	{
		q = p;	//将p赋值给q作为p的前驱指针
		p = p -> next;	//将p指向下一条记录 
	}
	if (p == NULL)	//如果p为空，说明链表没有该结点
	{
		printf("学号不存在！");
	}
	else
	{
		while(1)
		{
			printf("要修改的学生信息如下：\n");
			printf("\t学号\t姓名\t成绩\t成绩\t成绩\t平均成绩\n");
			printf("--------------------------------------------------------------\n");
			printf("\t%s\t%s\t%5.2f\t%5.2f\t%5.2f", p -> ID, p ->name, p -> score1, p -> score1, p -> score2, p -> score3, p -> Average);
			
			printf("---请输入新值---");
			printf("请输入学号：");
			scanf("%s", &p -> ID);
			getchar();
		
			printf("请输入姓名：");
			scanf("%s", &p -> name);
			getchar();
			
			printf("请输入成绩：");
			scanf("%f", &p ->score1);
			getchar();
			
			printf("请输入成绩：");
			scanf("%f", &p ->score2);
			getchar();
			
			printf("请输入成绩：");
			scanf("%f", &p ->score3);
			getchar();
			
			sum = p->score1 + p->score2 + p->score3;
			p -> Average = (float)(sum / 3);
			
			printf("是否继续(y/n)：");
			if(getchar() == 'n')
			{
				break;
			}
		}
	}

}

	//删除结点
struct student *del(struct student *head)
{
	char id[20];
	char k[5];
	struct student *p, *q;
	
	printf("请输入要删除的学生学号：");
	scanf("%s", &id);
	
	q = p = head;	//赋值
	
		//找不到学号或指针为空 
	while(p != NULL && strcmp(p -> ID, id))
	{
		q = p;	//将p赋值给q作为p的前驱指针
		p = p -> next;	//将p指向下一条记录 
	}
	if (p == NULL)	//如果p为空，说明链表没有该结点
	{
		printf("学号不存在！");
	}
	else
	{
		while(1)
		{
			printf("要删除的学生信息如下：\n");
			printf("\t学号\t姓名\t成绩\t成绩\t成绩\t平均成绩\n");
			printf("--------------------------------------------------------------\n");
			printf("\t%s\t%s\t%5.2f\t%5.2f\t%5.2f", p -> ID, p ->name, p -> score1, p -> score1, p -> score2, p -> score3, p -> Average);
			
			do{
				printf("是否要删除(y/n)：");
				scanf("%s", &k);
			}while(k[0] != 'y' && k[0] != 'n');
			
			if(k[0] != 'n')	//删除确认判断 
			{
				if (p == head)	//如果p = head，说明删的是头结点 
				{
					head = p -> next;
				}
				else	//不是头指针， p的后继结点作为q的后继结点 
				{
					q -> next = p -> next;
					free(p);	//释放p所指的结点空间
					printf("已删除学号为%s的学生记录！\n", id); 
				}
			}
			
			printf("是否继续(y/n)：");
			if(getchar() == 'n')
			{
				break;
			}
		}
	}
	return head;
}

	//按姓名查询 
struct student *inqu(struct student *head)
{
	char n[20];
	struct student *p; 
	p = head; 
	
	printf("请输入要查询的学生姓名：");
	scanf("%s", &n);
	
	if(strcmp(p -> name, n) == 0)
	{
		while(1)
		{
			printf("你要查询的学生信息如下：\n");
			printf("\t学号\t姓名\t成绩\t成绩\t成绩\t平均成绩\n");
			printf("--------------------------------------------------------------\n");
			printf("\t%s\t%s\t%5.2f\t%5.2f\t%5.2f", p -> ID, p ->name, p -> score1, p -> score1, p -> score2, p -> score3, p -> Average);
			printf("是否继续(y/n)：");
			if(getchar() == n)
			{
				break;
			}
		}
	}
	else
	{
		printf("学生不存在!\n");
	}
}

	//按平均值排序
struct student *sort(struct student *head)
{
	struct student *p, *q, *t,  *h1;
	
	h1 = head -> next;	//将原表的头指针所指的下一个结点作头指针 
	head -> next = NULL;	//断开原来链表头结点与其他结点的连接 
	
	while(h1 != NULL)		//当原表不为空时 进行排序 
	{
		t = h1;	//取原表的头结点 
		h1 = h1 -> next;	//原表头结点指针后移 
		p = head;	//设定移动指针p，从头指针开始 
		q = head;	//设定移动指针q作为p的前驱，初值为头指针 
		
		while(p != NULL && t -> Average < p -> Average)
		{
			q = p;	//待插入点小，新表指针后移 
			p = p -> next;
		}
		if(p == q)	//p == q,上面的while没有执行，即插入点大于头指针，此点应排在首位 
		{
			t -> next = p;	//待排序点的后继为p 
			head = t;	//新头结点为待排序点 
		}
		else   //待排序点应插在q与p之间，如p为空则为尾部 
		{
			t -> next = p;	//t的后继是p 
			q -> next = t;	//q的后继是t 
		}
	}
	return head; 
}

  //将学生信息从文件读出
void stu_read()
{
	struct student *p, *q, *head = NULL;
	FILE *fp;

	if( !(fp = fopen("spms.txt", "rb")))
	{
		printf("不能打开文件！");
		return 0;
	}

	p=(struct student *)malloc(LEN);	/*申请空间*/
	if(!p)
	{  
		printf("内存分配失败!\n");	/*如没有申请到，则内存溢出*/
		return head;	/*返回空头指针*/
	}
	head=p;		/*申请到空间，将其作为头指针*/
	while(!feof(fp))	/*循环读数据直到文件尾结束*/
	{
		if(1!=fread(p,LEN,1,fp))
		{
			break;/*如果没读到数据，跳出循环*/
		}
		p->next=(struct student *)malloc(LEN);	/*为下一个结点申请空间*/
		if(!p->next)
		{
			printf("内存分配失败!\n");	/*如没有申请到，则内存溢出*/
			return head;
		}
		q=p;	/*保存当前结点的指针，作为下一结点的前驱*/
		p=p->next;	/*指针后移，新读入数据链到当前表尾*/
	}
	q->next=NULL;	/*最后一个结点的后继指针为空*/

	fclose(fp);	/*关闭文件*/
	return head;	/*返回头指针*/
}

  //将学生信息写入文件
void stu_write(struct student *head)
{
	struct student *p;
	FILE *fp;

	if( !(fp = fopen("spms.txt", "wb")))
	{
		printf("不能打开文件！");
		return 0;
	}
	else
	{
		p=head;	/*移动指针从头指针开始*/
		
		while(p!=NULL)	/*如p不为空*/
		{
			fwrite(p,LEN,1,fp);	/*写入一条记录*/
			p=p->next;	/*指针后移*/
		}
		if (fwrite(p, LEN, 1, fp) != 1)
		{
			printf("文件写入错误！\n");
			fclose(fp);
		}
	}
	fclose(fp);	/*关闭文件*/
}


	//主程序 
int main()
{
	int s;
	struct student *head = NULL;	//定义头指针
	
//	stu_read();
	
	printf("-------学生成绩管理系统-------\n");
	printf("1.增加学生记录\n");
	printf("2.修改学生记录\n");
	printf("3.删除学生记录\n");
	printf("4.按姓名查询学生记录\n");
	printf("5.按平均成绩排序\n");
	printf("6.退出\nb");
	
	do{
		printf("请选择(1-6)：");
		scanf("%d", &s);
	}while(s < 1 || s > 6);	//如果输入非1-6则重新输入
	
	switch(s)
	{
		case 1:
			head = creat();
			break;
		case 2:
			modi(head);
			break;
		case 3:
			head = del(head);
			break;
		case 4:
			inqu(head);
			break;
		case 5:
			sort(head);
			break;
		case 6:
			exit(0);
			break;
	}
	//stu_write();

}
