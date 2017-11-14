#include<stdio.h>
#include<string.h>

#define NUM 10
#define ERROR 0
#define LEN 4

struct person
{
    char *name; // 姓名
    int count; //投票数
}leader[3]={"孔明",0,"王司徒",0,"白展堂",0};

int main()
{
    printf("欢迎进入鬼畜王评选投票系统：\n");
    printf("\n");
    printf("候选人有：孔明 王司徒 白展堂\n");
    printf("\n");
    int i,j;
    char leader_name[20];     //定义字符数组
    printf("请输入候选人名字：孔明 王司徒 白展堂\n");
    for(i=0;i<10;i++)
    {
        scanf("%s",leader_name);   //选民输入候选人名字
        for(j=0;j<3;j++)
        {
            if(strcmp(leader_name,leader[j].name)==0)    //如果名字对应，则该名字加1
                leader[j].count++;
        }
    }
    printf("\n最终投票结果为：\n");
    for(i=0;i<3;i++)
    {
        printf("%13s:%d\n",leader[i].name,leader[i].count);
    }
    return 0;

}
