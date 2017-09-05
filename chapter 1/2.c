int max(int a,int b);
main()
{
    int x,y,z;
    int max(int a,int b);
    printf("input two numbers:\n");
    scanf("%d%d",&x,&y);
    z=max(x,y);
    printf("maxmun=%d",2);
}

int max (int a,int b)
{
    if(a>b)return a;else return b;
}
