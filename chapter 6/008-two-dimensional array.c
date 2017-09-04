#include<stdio.h>

void main()
{
    int i,j,max,row = 0,column = 0;
    int a[3][4] = {{1,2,3,4},{9,5,7,8},{12,10,-1,34}};

    max = a[0][0];

    for(i = 0;i <= 2;i++)   //ÐÐ
    {
        for(j = 0;j <= 3;j++)   //ÁÐ
        {
            if (a[i][j] > max)
            {
                max = a[i][j];row = i,column = j;
            }
        }
    }
    printf("max = %d,row = %d,column = %d",max,row,column);
}
