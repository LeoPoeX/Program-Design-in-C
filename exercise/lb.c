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

    printf("�Ƿ�����(y/n)?");
    scanf("%c", &a);

    while(a == 'Y' || a == 'y'){
        head = tj(head);
        xs(head);
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
	int num;
	
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
	printf("����������");
	scanf("%d", &num);
	
	p -> num = num;
	p -> next = NULL;
	
	return head;
}

	//��ӡ 
void xs(struct student *head)
{
	struct student *p = head;
	int j = 1;
	
	while(p != NULL)	//���p��Ϊ�գ���� 
	{
		printf("  %d\t%d\n", j, p->num);
		p = p -> next;
		j++;
	}
	
}
