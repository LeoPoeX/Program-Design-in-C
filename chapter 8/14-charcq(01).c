#include<stdio.h>
        //字符串a复制到字符串b【下标法】
int main()
{
    char a[] = "Better late than never.", b[40];
    int i;

    for(i = 0; *(a + i) != '\0'; i++)
    {
        *(b + i) = *(a + i);
    }
    *(b + i) = '\0';

    printf("string a is:   %s \n", a);
    printf("string b is:   ");

    for(i = 0; b[i] != '\0'; i++)
    {
        printf("%c",b[i]);
    }
    printf("\n\n");

}
