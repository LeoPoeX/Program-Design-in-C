#include<stdio.h>

void swap(int *p1, int *p2);

int main()
{
    int a, b;
    int *pointer_1, *pointer_2;

    printf("输入两个整数： ");
    scanf("%d %d", &a, &b);
    pointer_1 = &a;
    pointer_2 = &b;

    if (a < b)
    {
        swap(pointer_1, pointer_2);
        //swap实现的是交换
    }

    printf("\n%d > %d \n", a, b);
}

void swap(int *p1, int *p2)
{
    int temp;

    printf("I'm swapping……\n");
    printf("please wait O_o");

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}
