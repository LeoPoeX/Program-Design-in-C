#include<stdio.h>

int main()  
{  
    enum boy{Tom,Danny,Gan,LiLei}month[31],j;  
    int i;  
    j=Tom;  
    for(i=1;i<=30;i++)  
    {  
        month[i]=j;  
        j=j+1;  
        if(j>LiLei)  
        {  
            j=Tom;  
        }  
    }  
    for(i=1;i<=30;i++)  
    {  
        switch(month[i])  
        {  
            case Tom:printf("%4d %s  ",i,"Tom");  
                break;  
            case Danny:printf("%4d %s  ",i,"Danny");  
                break;  
            case Gan:printf("%4d %s  ",i,"Gan");  
                break;  
            case LiLei:printf("%4d %s  ",i,"LiLei");  
                break;  
            default:  
                break;  
        }  
    }  
   printf("\n\n");  
}
