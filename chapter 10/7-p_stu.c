#include <stdio.h>
#include <string.h>

struct student
{
	int num;
	char name[20];
	float score[3]; 
};

void print(struct student *);

int main(int argc, char *argv[])
{
	struct student stu;
	
	stu.num = 8;
	strcpy(stu.name, "Bystander");
	stu.score[0] = 96;
	stu.score[1] = 83.5;
	stu.score[2] = 92.5;
	
	print(&stu);
	
	return 0;
}

void print(struct student *p)
{
	printf("\tnum = %d \n", p -> num);
	printf("\tname = %s \n", p -> name);
	printf("\tscore1 = %5.2f \n", p -> score[0]);
	printf("\tscore2 = %5.2f \n", p -> score[1]);
	printf("\tscore3 = %5.2f \n", p -> score[2]);
	printf("\n");
}
