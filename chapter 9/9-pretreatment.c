#include<stdio.h>
#include<string.h>

#define STR(s1, s2, s3, sum) strcat(strcat(strcat(sum, s1), s2), s3)
// strcat  黏贴一个字符串

int main()
{
    char str1[] = "I ", str2[] = "love ", str3[] = "Fishc.com! ", str[40] = "";

    STR(str1, str2, str3, str); //strcat(strcat(strcat(str, str1), str2), str3)

    printf("\n\t str1 = %s \n\t str2 = %s \n\t str3 = %s \n\t str = %s \n", str1, str2, str3, str);
}
