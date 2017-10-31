#include<stdio.h>

int main()
{
    int a, b, *p, *p1, *p2;

    printf("输入两个整数： ");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;

    if (a < b)
    {
        p = p1;
        p1 = p2;
        p2 = p;
    }   //互换，p1指向b，p2指向a

    printf("\na = %d, b = %d \n", a, b);
    printf("max = %d,min = %d \n", *p1, *p2);

}
