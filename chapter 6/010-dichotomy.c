#define M 10
#include<stdio.h>

void main()
{
    static int a[M] = {-12,0,6,16,23,56,80,100,110,115};
    int n,low,mid,high,found;

    low = 0;
    high = M -1;
    found = 0;

    printf("input a number to be searched: \n");    //输入搜索的数
    scanf ("%d",&n);

    while (low <= high)
    {
        mid = (low + high) / 2;
        if(n == a[mid])
        {
            found = 1;
            break;
        }   /*找到，结束循环*/
        else if (n > a[mid])
            low = mid + 1;
        else
            high = mid + 1;
    }

    if(found == 1)
        printf("The index of %d is %d",n,mid);
    else
        printf("There is not %d",n);

}
