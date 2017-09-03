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

    while(fabs(t) > 1e-6)   //求t的绝对值
    {
        pi = pi + t; n = n + 2 ;s = -s; t = s / n;     /*pi 代表 π/4 ； n 表示
                        分母 ；s 表示符号 ；t 表示每一次的分数*/
    }
    pi = pi * 4;
    printf("pi = %10.6f\n",pi);
}
