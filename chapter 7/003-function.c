#include<stdio.h>

void main()
{
    float max(float x,float y);
    float a, b;
    float c;

    scanf("%f %f",&a,&b);
    c = max(a,b);
    printf("max is %f\n",c);
}

float max(float x,float y)
{
    float z;    //z为实型变量
    z = x > y ? x : y;
    return (z);
}
