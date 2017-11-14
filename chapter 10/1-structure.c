#include<stdio.h>

int main()
{
    struct date
    {
        int month;
        int day;
        int year;
    };

    struct
    {
        int num;
        char name[20];
        char sex;
        struct date birthday;
        float score;
    }boy1, boy2;

    printf("请输入生日(年)：");
    scanf("%d", &boy1.birthday.year);
    printf("请输入生日(月)：");
    scanf("%d", &boy1.birthday.month);
    printf("请输入生日(日)：");
    scanf("%d", &boy1.birthday.day);
    printf("\n");

    boy2 = boy1;

    printf("boy1's birthday is %d-%d-%d\n", boy1.birthday.year, boy1.birthday.month, boy1.birthday.day);
    printf("boy2's birthday is %d-%d-%d\n", boy2.birthday.year, boy2.birthday.month, boy2.birthday.day);

}
