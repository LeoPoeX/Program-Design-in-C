#include <stdio.h>
void main()
{
    char c;
    while((c=getchar()) != ' ')
    {
        if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        {
            c = c + 4;
            if(c > 'Z' && c < 'Z' + 6 || c > 'z')
            {
                c = c - 26;
            }
        }
            printf("%c",c);
    }
}
