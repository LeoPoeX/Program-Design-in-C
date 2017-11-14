#include <stdio.h>

struct student
{
	int num;
	float score;
	struct student *next;
};

int main(int argc, char *argv[])
{
	struct student a, b, c, *head;
	
	a.num = 10101;
	a.score = 83.5;
	b.num = 10103;
	b.score = 90;
	c.num = 10107;
	c.score = 76.5;
	
	//head 头指针 
	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	
	do	//用do-while 输出 
	{
		printf("%ld %5.1f\n", head -> num, head -> score);
		head = head -> next;
	} while(head); //while(head != 0)
	printf("\n") ;
	
	return 0;
}
