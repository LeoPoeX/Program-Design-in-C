#include<stdio.h>

void main()
{
    int i,j,a[3][3];

    for(i = 0;i <3;i++) //输入数组
    {
        for(j = 0;j < 3;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(i = 0;i < 3;i++)    //输出数组
    {
        for(j = 0;j < 3;j++)
         {

            if (i == 1 || j == 1)
            {
                printf("%-6d",a[i][j]);
            }
            else
            {
                printf("%-6c",' ');
            }
         }
        printf("\n");
    }
}
