#include<stdio.h>

int main()
{
    struct student
    {
        int num;
        char *name;
        char sex;
        float score;
    }boy1, boy2 = {102, "Jane", 'M', 98.5};

    boy1 = boy2;

    printf("Number = %d\nName = %s\nScore = %f\n", boy1.num, boy1.name, boy1.score);
    printf("\n");
    printf("Number = %d\nName = %s\nScore = %f\n", boy2.num, boy2.name, boy2.score);

}
