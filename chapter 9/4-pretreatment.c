#include<stdio.h>

#define PIN1 char*      //PIN1 = char*
typedef char* PIN2;     //char* 为PIN2

int main()
{
    PIN1 x, y;      //char *x, y
    PIN2 a, b;      // char *a, *b

    printf("By #define: %d  %d \n", sizeof(x), sizeof(y));
    printf("By typedef: %d  %d \n", sizeof(a), sizeof(b));
}
