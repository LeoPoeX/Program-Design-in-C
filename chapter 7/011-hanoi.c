#include<stdio.h>

void main()
{
    //对hanoi函数声明
    void hanoi(int n, char A, char B, char C);
    int m;

    //输入盘子数量
    printf("input the number of diskes:");
    scanf("%d",&m);
    printf("The step to moveing %d diskes:\n",m);

    hanoi(m, 'A', 'B', 'C');
}

/*定义hanoi函数，将n个盘从A座借助B座，移到C座*/
void hanoi(int n, char A, char B, char C)
{
    //对move函数声明  从 x 移到 y
    void move(char x, char y)

    if(n==1)
    {
        printf("Move disk %d from %c to %c\n",A,C,n);
    }
    else
    {
        hanoi(A,C,B, n-1);
        printf("Move disk %d from %c to %c\n",n,A,C);
        hanoi(B,A,C,n-1,);
    }
}
//定义move函数
void move(char x, char y)
{
    printf("%c --> %c\n", x, y);
}

