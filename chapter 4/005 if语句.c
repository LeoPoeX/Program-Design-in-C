#include<stdio.h>

void main()
{
    int score;
    printf("input a score: ");
    scanf("%d",&score);
    if(score<60)
        printf("The score is E!\n");
    else if (score>=60 && score <70)
        printf("The score is D!\n");
    else if (score>=70 && score <80)
        printf("The score is C!\n");
    else if (score>=80 && score <90)
        printf("The score is B!\n");
    else
        printf("The score is A!\n");
}
