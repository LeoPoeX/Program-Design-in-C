#include<stdio.h>

void main()
{
    int c,s;
    float p,w,d,f;

    printf("input 运费 货重 距离: ");
    scanf("%f %f %d",&p,&w,&s);

    if (s>=3000)
    {
        c=12; //3000km以上折扣相同
    }
    else
    {
        c=s/250; //3000km以下各路程的折扣
    }

    switch(c)
    {
        case 0:
            d=0;
            break;
        case 1:
            d=2;
            break;  //250~500km以下，折扣d=2%
        case 2:
        case 3:
            d=5;
            break;
        case 4:
        case 5:
        case 6:
        case 7:
            d=8;
            break;
        case 8:
        case 9:
        case 10:
        case 11:
            d=10;
            break;
        case 12:
            d=15;
            break;
    }
    f = p * w * s * (1-d/100);
     printf("freight=%f\n",f);
}
