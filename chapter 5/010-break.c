#include<stdio.h>

void main()
{
    int r;
    double pi = 3.14159 ,area;

    for(r = 1;r <=10;r++)
    {
        area = pi * r * r;
        if (area > 100)
        {
            break;
        }
        printf("r = %d ,area = %f\n",r,area);
    }
}
