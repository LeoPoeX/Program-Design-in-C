#include<stdio.h>

void main()
{
    //��hanoi��������
    void hanoi(int n, char A, char B, char C);
    int m;

    //������������
    printf("input the number of diskes:");
    scanf("%d",&m);
    printf("The step to moveing %d diskes:\n",m);

    hanoi(m, 'A', 'B', 'C');
}

/*����hanoi��������n���̴�A������B�����Ƶ�C��*/
void hanoi(int n, char A, char B, char C)
{
    //��move��������  �� x �Ƶ� y
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
//����move����
void move(char x, char y)
{
    printf("%c --> %c\n", x, y);
}

