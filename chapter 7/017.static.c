/*观察静态局部变量的值*/
#include<stdio.h>

int f(int a)
{
    auto b = 0;
    static c = 3;

    b = b +1;   //b == 1, 1, 1
    c = c + 1;  //c == 4, 5, 6

    return(a + b + c);  //7, 8, 9
}

void main()
{
    int a = 2, i;

    for (i = 0; i < 3; i++)
    {
        printf("%d\n",f(a));
    }

}
