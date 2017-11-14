#include<stdio.h>

struct stu
{
    int num;
    char *name;
    char sex;
    float score;
}boy1 = {102, "Jane", 'M', 86.5};

int main()
{
    struct stu *pstu;
    pstu = &boy1;

    printf("Number = %d\nName = %s\n", boy1.num, boy1.name);
    printf("Sex = %c\nScore = %f\n", boy1.sex, boy1.score);

    printf("\n");

    printf("Number = %d\nName = %s\n", (*pstu).num, (*pstu).name);
    printf("Sex = %c\nScore = %f\n", (*pstu).sex, (*pstu).score);

    printf("\n");

    printf("Number = %d\nName = %s\n", pstu->num, pstu->name);
    printf("Sex = %c\nScore = %f\n", pstu->sex, pstu->score);

}
