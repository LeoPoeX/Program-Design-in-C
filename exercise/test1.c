#include<stdio.h>

void main()
{
    float money;
    //100,50,10,5,2,1,1角，5分，1分

    printf("Enter an amount,for example:345.78\n");
    scanf("%f", &money);

    int mo;
    mo = money * 100;

    int d;
    int a[9] = {10000,5000,1000,500,200,100,10,5,1};
    int n[9];

        for(d = 0; d < 9; d++)
        {
            n[d] = floor(mo / a[d]);
            mo = mo - (a[d] * n[d]);
            printf("%d \n",n[d]);
        }

    printf("100RMB,50RMB,10RMB,5RMB,2RMB,1RMB,1jiao,5fen,1fen each with: %d,%d,%d,%d,%d,%d,%d,%d,%d",n[0], n[1], n[2], n[3], n[4], n[5], n[6], n[7], n[8]);
}
