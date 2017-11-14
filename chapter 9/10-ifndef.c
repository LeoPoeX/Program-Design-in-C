#include<stdio.h>

int main()
{
    char str[40];
    int cmp(char *str1, char *str2);

    printf("输入一个你最喜欢的网站：");
    scanf("%s", str);

#ifndef CORRECT     //如果没有CORRECT
#define CORRECT "fishc.com"   //定义 CORRECT
#endif // CORRECT

    if(cmp(str, CORRECT) == 0)
    {
        printf("\nYeah! You are a smart man!\n");
    }
    else
    {
        printf("\nYou fool! Man!\n");
    }

}

int cmp(char *str1, char *str2)
{
    int i = 0, j = 0;

    while( str1[i])
    {
        while( str2[j] == str1[i])
        {
            i++;
            j++;
            if( !str2[j])
            {
                return 0;
            }
        }
        j = 0;
        i++;
    }
    return -1;
}
