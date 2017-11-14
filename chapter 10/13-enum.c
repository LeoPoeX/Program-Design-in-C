#include <stdio.h>

int main()
{
	enum weekday{sun, mon, tue, wed, thu, fri, sat}a, b, c;
	
	a = sun;  //a = 1,这样是不行的 
	b = mon;
	c = tue;
	
	printf("%d, %d, %d", a, b, c);
	printf("\n\n");
}
