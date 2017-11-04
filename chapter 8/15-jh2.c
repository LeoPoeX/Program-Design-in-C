#include<stdio.h>
    //形参用字符指针变量
int main()
{
    void copy_string(char *from, char *to);

    char *a = "Please don't break this.";
    char b[] = "Darkness closed about us.";
        //因为b是复制的那个，所以不能为 *b
    printf("string a = %s \nstring b = %s \n", a, b);
    printf("\ncopy string a to string b: \n");

    copy_string(a, b);

    printf("\nstring a = %s \nstring b = %s \n", a, b);
}

        //a复制到b
void copy_string(char *from, char *to)
{
    while((*to++ = *from++) != '\0')
    {
        ;
    }
}
