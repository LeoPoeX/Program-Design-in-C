#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

#define LEN sizeof(struct student)	//student�ṹ�Ĵ�С

struct student *creat(); //��������
struct student *del( struct student *head, int num);
// del��������ɾ����㣬*head�������ͷָ�룬numҪɾ���Ľ��num 

void print(struct student *head);  //��ӡ����

struct student
{
	int num;
	float score;
	struct student *next;
};

int n;	//ȫ�ֱ�����������¼����˶������� 

int main(int argc, char *argv[])
{
	struct student *stu, *p;
	
	stu = creat();
	p = stu;
	print( p );

	printf("��������Ҫɾ����ѧ�ţ�");
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
	
	//LEN��student�ṹ�Ĵ�С 
	p1 = p2 = (struct student *)malloc(LEN); 
	
	printf("������ѧ�ţ�");
	scanf("%d", &p1 -> num);
	printf("���������: ");
	scanf("%f", &p1 -> score);
	
	head = NULL;
	n = 0; 
	
	while( p1 -> num )  //p1��num������0 
	{
		n++;
		if(1 == n)
		{
			head = p1;
		}
		else  //������1 
		{
			p2 -> next = p1;
		}
		p2 = p1;
		//�ٴ���һ������ 
		p1 = (struct student *)malloc(LEN);
		
		printf("\n������ѧ�ţ�");
		scanf("%d", &p1 -> num);
		printf("���������: ");
		scanf("%f", &p1 -> score);
	}
	p2 ->next = NULL;
	
	return head;
}

void print(struct student *head)
{
	struct student *p;
	
	printf("\n�ܹ��� %d ����¼!\n\n", n);
	
	p = head;
	
	if(head != NULL) 
	{
		do
		{
			printf("ѧ���� %d �ĳɼ��ǣ� %5.2f \n", p ->num, p->score);		
			p = p -> next;
		}while( p != NULL);
	}
	
}

struct student *del(struct student *head, int num)
{
	struct student *p1, *p2;
	
	if( NULL == head )	//���ͷ���ָ��NULL�����Ǹ�������
	{
		printf("\n���Ǹ�������\n");
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
		if(p1 == head)	//����Ҫɾ���Ľ��λ��ͷ����ʱ�� 
		{
			head = p1 -> next;
		}
		else		//һ����� 
		{
		//�൱�� A -> B -> C ,ɾ��B�� A -> C 
			p2 ->next = p1 ->next;	  
		}
		printf("\nɾ��No. %d �ɹ���\n", num);
		n = n -1;  //n����Ϊһ��ȫ�ֱ�����������¼����������� 
	}
	else
	{
		printf("%d û���ҵ���\n", num);
	}
	
END:
	 return head; 

}
