#include<stdio.h>

int main()
{
    char *a = "I love Fishc.com!";
    int i;

    for(i = 0; a[i] != '\0'; i++)
    {
        printf("%c", a[i]);
    }

    printf("\n");
    printf("\n");
    printf("The sixth character is: %c \n", a[5]);

}
