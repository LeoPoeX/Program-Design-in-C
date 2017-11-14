#include<stdio.h>

int main()
{
    struct student
    {
        int num;
        char *name;
        char sex;
        float score;
    }boy1;

    boy1.num = 007;
    boy1.name = "Jane";

    printf("The address of struct is %o:\n",&boy1);
    printf("The address of num is %o:\n",&boy1.num);

}
