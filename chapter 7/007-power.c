#include<stdio.h>
void main()
{
    double power(double a, double b);
    double x = 2.0, y = 3.0;
    double result;

    result = power(x, y);
    printf("%f of %f power is %f\n", x, y, result);
    return (0);
}

double power(double a, double b)
{
    double c, i;
    c = 1;
    for (i = 1;i <= b;i++)
    {
       c = a * c;
    }
    return (c);
}
