#include<stdio.h>
    //用字符数组作参数
int main()
{
    void copy_string(char from[], char to[]);

    char a[] = "Please don't break this.";
    char b[] = "Darkness closed about us.";

    printf("string a = %s \nstring b = %s \n", a, b);
    printf("\ncopy string a to string b: \n");

    copy_string(a, b);

    printf("\nstring a = %s \nstring b = %s \n", a, b);
}

        //a复制到b
void copy_string(char from[], char to[])
{
    int i = 0;

    while(from[i] != '\0')
    {
        to[i] = from[i];
        i++;
    }
    to[i] = '\0';
}
