#include<stdio.h>

typedef void (*P)();

void fun();
int main()
{
	P p1;	//void (*p1)();
	p1 = fun;
	(p1)();
}

void fun()
{
	printf("I LOVE Fishc.com\n");
}
