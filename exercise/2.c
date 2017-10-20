#include<stdio.h>
#include<stdlib.h>

void main()
{
    int array[20];  //定义数组，共20个数
    int max = array[0];    //定义最大值
    int min = array[0];    //定义最小值
    int aver = 0;   //定义平均值
    int sum = 0;    //定义总和

    //用for循环生成20个随机数
    for (int i = 0; i < 20; i++)
    {
        //10~50随机生成
        array[i] = rand() % (50 - 10 +1) + 10;
        printf("%d   \n",array[i]);  //将数组每个元素打印出来
    }
    //计算最大值
    for (int i = 0;i < 20; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    //计算最小值
    for (int i = 0;i < 20; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    //计算总和
    for (int i = 0;i < 20; i++)
    {
        sum += array[i];
    }
    aver = sum / 20;

    printf("max = %d \nmin = %d \nsum = %d \naver = %d \n",max,min,sum,aver);
}
