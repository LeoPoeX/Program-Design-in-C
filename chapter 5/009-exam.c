#include<stdio.h>

void main()
{
    int i,j,k;

    printf("\n");
    for (i = 1;i < 5;i++)    //����Ϊ����ѭ��
    {
        for(j = 1;j < 5;j++)
            {
                for(k = 1;k < 5;k++)
                {
                    if(i != k && i !=j && k != j)   //ȷ�� i j k��λ������ͬ
                    printf("%d%d%d\n",i,j,k);
                }
            }
    }
}