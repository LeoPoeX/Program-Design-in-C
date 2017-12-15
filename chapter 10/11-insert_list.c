#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

#define LEN sizeof(struct student)  //student结构的大小

struct student *creat(); //创建链表
struct student *del(struct student *head,int num);
// del函数用于删除结点，*head即链表的头指针，num要删除的结点num
struct student *insert(struct student *head,struct student *stu_2);//????,??????????????????
//插入操作，需要被插入的链表和待插入的结构的地址
void print(struct student *head);  //打印链表

struct student
{
    int num;
    double score;
    struct student *next;
};

int n;  //全局变量，用来记录存放了多少数据

int main()
{
    struct student *stu,*p,stu_2;
    int n;
    stu=creat();
    p=stu;
    print(p);
    printf("Please enter the number to delete: ");
    scanf("%d",&n);
    print(del(p,n));
    printf("Please enter the number to insert: ");
    scanf("%d",&stu_2.num);
    printf("Please enter the score: ");
    scanf("%lf",&stu_2.score);
    p=insert(stu,&stu_2);
    print(p);
    printf("\n");
    system("pause");
}
	//创建链表
struct student *creat()
{
    struct student *head;
    struct student *p1,*p2;
    p1=p2=(struct student *)malloc(LEN);
    printf("Please enter the number: ");
    scanf("%d",&p1->num);
    printf("Please enter the score: ");
    scanf("%lf",&p1->score);
    head=NULL;
    n=0;
    while(p1->num)
    {
        n++;
        if(1==n)
        {
            head=p1;
        }
        else
        {
            p2->next=p1;
        }
        p2=p1;
        p1=(struct student *)malloc(LEN);
        printf("\nPlease enter the num: ");
        scanf("%d",&p1->num);
        printf("Please enter the score: ");
        scanf("%lf",&p1->score);
    }
    p2->next=NULL;
    return head;
}
	//删除结点
struct student *del(struct student *head,int num)
{
    struct student *p1,*p2;
    if(NULL==head)  //如果头结点指向空，这是个空链表
    {
        printf("\nThis list is null!\n");
        goto end;
    }
    p1=head;
    while(p1->num!=num&&p1->next!=NULL)
    {
        p2=p1;
        p1=p1->next;
    }
    if(num==p1->num)
    {
        if(p1==head)  //当将要删除的结点是头结点时
        {
            head=p1->next;
        }
        else         //一般情况
        {
            p2->next=p1->next;
        }
        printf("\nDelete No: %d succeed!\n",num);
        n=n-1;    //n为全局变量
    }
    else
    {
        printf("%d not been found!\n");
    }
end:
    return head;
}
	//打印链表
void print(struct student *head)
{
    struct student *p;
    printf("\nThere are %d records!\n\n",n);
    p=head;
    if(head)
    {
        do
        {
            printf("学号为%d的成绩是:%lf\n",p->num,p->score);
            p=p->next;
        }while(p);
    }
}
	//插入结点
struct student *insert(struct student *head,struct student *stu_2)
{
    struct student *p0,*p1,*p2;
    p1=head;
    p0=stu_2;
    if(NULL==head)
    {
        head=p0;
        p0->next=NULL;
    }
    else
    {
        while((p0->num>p1->num)&&(p1->next!=NULL))
        {
            p2=p1;
            p1=p1->next;
        }
        if(p0->num<=p1->num)
        {
            if(head==p1)//p1是头结点
            {
                head=p0;
            }
            else        //普通情况
            {
                p2->next=p0;
            }
            p0->next=p1;
        }
        else            //插入末尾
        {
            p1->next=p0;
            p0->next=NULL;
        }
    }
    n=n+1;
    return head;
}
