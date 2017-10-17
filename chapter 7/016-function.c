#include<stdio.h>

//全局变量
float Max = 0,Min = 0;

void main()
{
    float average(float array[],int n);
    float ave,score[10];

    int i;
    for(i = 0; i < 10; i++)
    {
        //获得十个分数
        scanf("%f",&score[i]);
    }
    ave = average(score, 10);
    printf("Max = %6.2f \nMin = %6.2f \naverage = %6.2f \n", Max, Min, ave);
}

float average(float array[],int n)
{
    int i;
    float aver, sum = array[0];
    Max = Min =array[0];

    for(i = 1; i < n;i++)
    {
        //计算最大值和最小值
        if(array[i] > Max)
        {
            Max = array[i];
        }
        else if(array[i] < Min)
        {
            Min = array[i];
        }

        //计算总分
        sum += array[i];
    }

    //计算平均分
    aver = sum / n;

    return aver;
}
