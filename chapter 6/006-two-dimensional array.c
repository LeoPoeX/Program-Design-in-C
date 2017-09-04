#include<stdio.h>

void main()
{
    int i,j,sum = 0,average,v[3];
    int a[5][3] = {{80,75,92},{61,65,71},{59,63,70},{85,87,90},{76,77,85}};

    for (i = 0;i < 3;i++)   //subject
    {
        for(j = 0;j < 5;j++)    //student
        {
            sum += a[j][i];
        }
        v[i] = sum / 5;     //各科平均数
        sum = 0;
    }
    average = (v[0] + v[1] + v[2]) / 3; //三科总平均数

    printf("math:%d \nc languag:%d \nFoxpro:%d \n",v[0],v[1],v[2]);
    printf("total:%d\n",average);
}
