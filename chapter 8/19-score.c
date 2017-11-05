#include<stdio.h>

int main()
{
    double score[][4] = {{60.5, 42.1, 97.1, 52.6}, {76.4, 45.1, 63.1, 64.1}, {75.5, 97.5, 56.1, 86.1}, {64.1, 86.5, 76.5, 99.4}};
    double *search(double(*pointer)[4], int n);
    double *p;
    int i, m;

    printf("请输入学生编号(0~3)： ");
    scanf("%d", &m);
    printf("\n");

    p = search(score, m);

    printf("该学生成绩是：\n");

    for(i = 0; i < 4; i++)
    {
        printf("%5.2f\t", *(p + i));
    }
    printf("\n");

}
double *search(double(*pointer)[4], int n)
{
    double *pt;

    pt = *(pointer + n);

    return pt;
}

