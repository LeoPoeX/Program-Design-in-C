#include<stdio.h>

int main()
{
    int array[3][4] = {2, 3, 4, 8, 4, 5, 6, 9, 12, 30, 11, 24};
    int i, j;
    int row, line;
    int (*p)[4];

    p = array;

            printf("行(请输入0~2)： ");
            scanf("%d", &row);

            while(row > 2 || row < 0)
            {
                printf("\n(请重新输入)行：");
                scanf("%d", &row);
            }

            printf("\n列(请输入0~3)： ");
            scanf("%d", &line);

            while(line > 3 || line < 0)
            {
                printf("\n(请重新输入)列：");
                scanf("%d", &line);
            }

            printf("\n行是：%d   列是：%d", row, line);

            printf("\narray[%d][%d] = %d", row, line, *(*(p+row)+line));

}
