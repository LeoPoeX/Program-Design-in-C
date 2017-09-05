#include<stdio.h>
#include<math.h>

void main()
{
    int m ,i ,k;

    for (m = 100;m < 200; m++)
    {
        k = sqrt(m);

        for (i = 2;i <= k;i++)
        {
            if (m % i == 0)
            {
                break;
            }
        }
    if (i>k)
        printf("100~200 prime numbers have: %d \n",m);
    }
}
