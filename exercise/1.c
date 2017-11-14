#include<stdio.h>

int main(void)
{
    double money;

    printf("Enter an amount,for example:345.78\n");
    scanf("%lf", &money);

    printf("mo: %lf\n", money);

    money = money + 0.005;
    int mo = (int)(money * 100);
    printf("mo: %d\n", mo);

    int d;
    int a[9] = {10000,5000,1000,500,200,100,10,5,1};
    int n[9];

        for(d = 0; d < 9; d++)
        {
            n[d] = mo / a[d];
            printf("n[d] : %d\n", n[d]);
            mo = mo % a[d];
            printf("mo %d \n", mo);
        }

    printf("100RMB,50RMB,10RMB,5RMB,2RMB,1RMB,1jiao,5fen,1fen each with: %d,%d,%d,%d,%d,%d,%d,%d,%d",n[0], n[1], n[2], n[3], n[4], n[5], n[6], n[7], n[8]);
	
	printf("\n"); 
}
