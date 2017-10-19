#include<stdio.h>

void main()
{
    float money;
    //100,50,10,5,2,1,1角，5分，1分
    int hundred, fifty, ten, five, two, one, dime, fivepence, penny;

    printf("Enter an amount,for example:345.78\n");
    scanf("%f", &money);

    hundred = money /100;
    fifty = (money-100*hundred)/50;
    ten = (money-100*hundred-50*fifty)/10;
    five = (money-100*hundred-50*fifty-10*ten)/5;
    two = (money-100*hundred-50*fifty-10*ten-5*five)/2;
    one = (money-100*hundred-50*fifty-10*ten-5*five-2*two)/1;
    dime = (money-100*hundred-50*fifty-10*ten-5*five-2*two-1*one)/0.1;
    fivepence = (money-100*hundred-50*fifty-10*ten-5*five-2*two-1*one-0.1*dime)/0.05;
    penny = (money-100*hundred-50*fifty-10*ten-5*five-2*two-1*one-0.1*dime-0.05*fivepence)/0.01;

    printf("100RMB,50RMB,10RMB,5RMB,2RMB,1RMB,1jiao,5fen,1fen each with:%d,%d,%d,%d,%d,%d,%d,%d,%d",hundred, fifty, ten, five, two, one, dime, fivepence, penny);
}
