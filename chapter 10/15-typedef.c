#include<stdio.h>

typedef struct
{
	int mouth;
	int day;
	int year;
}DATE;

int main()
{
	DATE date_one;
	
	date_one.mouth = 12;
	date_one.day = 31;
	date_one.year = 2017;
	
	printf("%d-%d-%d\n", date_one.year, date_one.mouth, date_one.day);
}
