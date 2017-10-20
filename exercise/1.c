#include<stdio.h>

void main()
{
    float money;
    //100,50,10,5,2,1,1角，5分，1分
    int hundred, fifty, ten, five, two, one, dime, fivepence, penny;

    hundred = fifty = ten = five = two = one = dime = fivepence = penny = 0;

    printf("Enter an amount,for example:345.78\n");
    scanf("%f", &money);

while (money > 100)
{
    money = money - 100;
    hundred++;
}
while (money > 50)
{
    money = money - 50;
    fifty++;
}
while (money > 10)
{
    money = money - 10;
    ten++;
}
while (money > 5)
{
    money = money - 5;
    five++;
}
while (money > 2)
{
    money = money - 2;
    two++;
}
while (money > 1)
{
    money = money - 1;
    one++;
}
while (money > 0.1)
{
    money = money - 0.1;
    dime++;
}
while (money > 0.05)
{
    money = money - 0.05;
    fivepence++;
}
while (money > 0.01)
{
    money = money - 0.01;
    penny++;
}

    printf("100RMB,50RMB,10RMB,5RMB,2RMB,1RMB,1jiao,5fen,1fen each with:%d,%d,%d,%d,%d,%d,%d,%d,%d",hundred, fifty, ten, five, two, one, dime, fivepence, penny);
}
