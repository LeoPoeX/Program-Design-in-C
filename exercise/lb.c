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

    printf("�Ƿ�����(y/n)?");
    scanf("%c", &a);

    while(a == 'Y' || a == 'y'){
        head = tj(head);
        xs(head);
        
		p = cr(head);
	    xs(p);
	    
        printf("�Ƿ�����(y/n)?");
        scanf(" %c", &a);
    }
    

    return 0;
}

	//��� 
struct student *tj(struct student *head)
{
	struct student *p, *p1;
	p1 = head;
	
	p = (struct student *)malloc(sizeof(struct student));
	if (p == NULL)
	{
		printf("�޷���ȡ�ļ�");
		exit(0);
	}
	if (head == NULL)	//���ͷָ��Ϊ�� 
	{
		head = p;
	}
	else
	{
		while(p1 ->next != NULL)	//���p1β��Ϊ�� 
		{
			p1 = p1 -> next;	//p1ָ����һ��ֱ����β 
		}
		p1 -> next = p;
	} 
	
	printf("������ѧ�ţ�");
	scanf("%d", &p -> num);
	
	printf("������ɼ���");
	scanf("%lf", &p -> score);

	p -> next = NULL;

}

	//���� 
struct student *cr(struct student *head)
{
	struct student *p, *p1 = head, *p2;
	p = (struct student *)malloc(sizeof(struct student));
	int n;
	n = p1 ->num;
	
	if (p == NULL)
	{
		printf("�޷���ȡ�ļ�");
		exit(0);
	}
	if (head == NULL)	//���ͷָ��Ϊ�� 
	{
		head = p;
	}
	else
	{
		printf("������Ҫ�����ѧ�ţ�");
		scanf("%d", &p ->num);
		printf("������Ҫ����ĳɼ���");
		scanf("%lf", &p ->score);
	
		while((p1 -> num < p -> num) && (p1 -> next != NULL))
		{
			p2 = p1;
			p1 = p1 -> next;
		}
		if(p1 -> num >= p -> num)
		{
			if(p1 == head)	//Ϊͷ�ڵ㣬�½��ڵ����ͷ�ڵ�ǰ 
			{
				p -> next = head;
				head = p;
			}
			else	//��ͨ��� 
			{
				p2 = p1;
				p -> next = p1 -> next;	//�½ڵ�ָ��ԭ�ڵ����һ�� 
				p1 -> next = p;	//��ǰ�ڵ�ָ���½ڵ� 
			}
		}
		else	//λ�ڽ�β 
		{
			p1 -> next = p;
			p -> next = NULL;
		}
	}
	
	return head;
	
}

	//��ӡ 
void xs(struct student *head)
{
	struct student *p = head;
	int j = 1;
	
	while(p != NULL)	//���p��Ϊ�գ���� 
	{
		printf("  %d\t%d\t%5.2f\n", j, p->num, p->score);
		p = p -> next;
		j++;
	}
	
}
