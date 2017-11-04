#include<stdio.h>
        //字符串a复制到字符串b【指针法】
int main()
{
    char a[] = "Better late than never.", b[40], *p1, *p2;
    int i;

    p1 = a;
    p2 = b;

    for( ; *p1 != '\0'; p1++, p2++)
    {
        *p2 = *p1;
    }
    *p2 = '\0';

    printf("string a is:   %s \n", a);
    printf("string b is:   ");

    for(i = 0; b[i] != '\0'; i++)
    {
        printf("%c",b[i]);
    }
    printf("\n");

}
