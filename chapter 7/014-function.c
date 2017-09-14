#include<stdio.h>

double average(double array[10]);

void main()
{
    //分数
    double score[10] = {82, 100, 87.5, 89, 78, 85, 67.5, 92.5, 93, 94};
    double result;

    //求平均值
    result = average(score);
    printf("average score is %5.2lf\n",result);
}

double average(double array[10])
{
    double result = 0;
    int i = 0;

    for (i = 0; i < 10; i ++)
    {
        result += array[i];
    }
    result /= 10;

    return result;
}
