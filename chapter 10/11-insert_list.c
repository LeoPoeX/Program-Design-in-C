#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

#define LEN sizeof(struct student)  //student�ṹ�Ĵ�С

struct student *creat(); //��������
struct student *del(struct student *head,int num);
// del��������ɾ����㣬*head�������ͷָ�룬numҪɾ���Ľ��num
struct student *insert(struct student *head,struct student *stu_2);//????,??????????????????
//�����������Ҫ�����������ʹ�����Ľṹ�ĵ�ַ
void print(struct student *head);  //��ӡ����

struct student
{
    int num;
    double score;
    struct student *next;
};

int n;  //ȫ�ֱ�����������¼����˶�������

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
	//��������
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
	//ɾ�����
struct student *del(struct student *head,int num)
{
    struct student *p1,*p2;
    if(NULL==head)  //���ͷ���ָ��գ����Ǹ�������
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
        if(p1==head)  //����Ҫɾ���Ľ����ͷ���ʱ
        {
            head=p1->next;
        }
        else         //һ�����
        {
            p2->next=p1->next;
        }
        printf("\nDelete No: %d succeed!\n",num);
        n=n-1;    //nΪȫ�ֱ���
    }
    else
    {
        printf("%d not been found!\n");
    }
end:
    return head;
}
	//��ӡ����
void print(struct student *head)
{
    struct student *p;
    printf("\nThere are %d records!\n\n",n);
    p=head;
    if(head)
    {
        do
        {
            printf("ѧ��Ϊ%d�ĳɼ���:%lf\n",p->num,p->score);
            p=p->next;
        }while(p);
    }
}
	//������
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
            if(head==p1)//p1��ͷ���
            {
                head=p0;
            }
            else        //��ͨ���
            {
                p2->next=p0;
            }
            p0->next=p1;
        }
        else            //����ĩβ
        {
            p1->next=p0;
            p0->next=NULL;
        }
    }
    n=n+1;
    return head;
}
