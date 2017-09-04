#include<stdio.h>

void main()
{
    int i,j;
    int a[2][3] ={{1,2,3},{4,5,6}},b[3][2];

    printf("array a: \n");  //输出数组a
    for(i = 0;i <2;i++)
    {
        for(j = 0;j < 3;j++)
        {
            printf("%5d",a[i][j]);  //输出这个数
            b[j][i] = a[i][j];
        }
        printf("\n");
    }
    printf("array b: \n");  //输出数组b
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 2;j++)
        {
            printf("%5d",b[i][j]);  //输出这个数
        }
        printf("\n");
    }

}
