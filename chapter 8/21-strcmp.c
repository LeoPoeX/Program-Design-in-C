#include<stdio.h>
#include<string.h>  //strcmp要用到

int main()
{
    void sort(char *name[], int n);
    void print(char *name[], int n);

    char *name[] = {"Fishc.com", "www.fishc.com", "home.fishc.com", "Fishc.com/dz"};
    int n = 4;

    sort(name, n);
    print(name, n);

}
    //排序和对比
void sort(char *name[], int n)
{
    char *temp;
    int i, j, k;

    for(i = 0; i < n - 1; i++)
    {
        k = i;

        for(j = i + 1; j < n; j++)
        {
            if(strcmp(name[k], name[j]) > 0)
            {
                k = j;
            }

            if( k != i)
            {
                temp = name[i];
                name[i] = name[k];
                name[k] = temp;
            }
        }
    }

}

    //打印
void print(char *name[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("%s \n", name[i]);
    }

}
