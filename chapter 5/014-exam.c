#include<stdio.h>
#include<math.h>

void main()
{
    int s;
    double pi , n, t;
    t = 1;
    pi = 0;
    n = 1.0;
    s = 1;

    while(fabs(t) > 1e-6)   //��t�ľ���ֵ
    {
        pi = pi + t; n = n + 2 ;s = -s; t = s / n;     /*pi ���� ��/4 �� n ��ʾ
                        ��ĸ ��s ��ʾ���� ��t ��ʾÿһ�εķ���*/
    }
    pi = pi * 4;
    printf("pi = %10.6f\n",pi);
}
