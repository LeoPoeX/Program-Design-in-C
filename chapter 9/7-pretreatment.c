#include<stdio.h>

#define SAY(y) (y)

int main()
{
    int i = 0;
    char say[] = {73, 32, 108, 111, 118, 101, 32, 102, 105, 115, 104, 99, 46, 99, 111, 109, 33};

    while( say[i] )
    {
        say[i] = SAY(say[i] * 1);  //SAY( ) 括号里可以是表达式
        i++;
    }
    printf("\n\t%s\n", say);
}
