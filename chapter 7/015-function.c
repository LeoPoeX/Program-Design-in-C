#include<stdio.h>

//定义了三面面积
int s1, s2, s3;

//计算体积和三面面积
int vs(int a, int b, int c)
{
    int v;

    v = a * b * c;
    s1 = a * b;
    s2 = b * c;
    s3 = a * c;

    return v;
}

void main()
{
    //定义正方形的长，宽，高
    int v, l, w, h;

    printf("input length,width and height :\n");
    scanf("%d%d%d", &l, &w, &h);

    v = vs(l,w,h);
    printf("\n v = %d, s1 = %d, s2 = %d, s3 = %d\n", v, s1, s2, s3);
}
