#include<stdio.h>
#include<stdlib.h>

#define NUM 3

struct person
{
    char name[20];
    char phone[12];
};

int main()
{
    struct person man[NUM];
    int i;

    for(i = 0; i < NUM; i++)
    {
        printf("input name: ");
        gets(man[i].name);
        printf("\n");
        printf("input phone: ");
        gets(man[i].phone);
        printf("\n");
    }
    printf("\t\tname\t\t\tphone\n");
    for(i = 0; i < NUM;i++)
    {
        printf("   %20s\t\t%20s\n", man[i].name, man[i].phone);
    }


}
