#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

#define LEN sizeof(struct student) //student�ṹ�Ĵ�С 

struct student *creat();	//�������� 
void print(struct student *head);	//��ӡ���� 

struct student
{
	int num;
	float score;
	struct student *next;
};

int n;	//ȫ�ֱ�����������¼����˶������� 

int main(int argc, char *argv[])
{
	struct student *stu;
	
	stu = creat();
	print(stu);
	
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

