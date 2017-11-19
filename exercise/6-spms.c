#include <stdio.h>
#include <string.h>
#include<stdlib.h>

struct student
{
	char ID[20];
	char name[10];
	float score1;
	float score2;
	float score3;
	float Average;
};

struct student stu[1000];	//声明学生数组
int num = 0;	//全局变量，用来记录存的记录数量

 //通过学号返回数组下标
int id_index(char id[])
{
	int i;

	for(i = 0; i < num; i++)
	{
		if(strcmp(id, stu[i].ID) == 0)
		{
			return i;
		}
	}
	return -1;
}
  //通过姓名返回数组下标
int name_index(char name[])
{
	int i;

	for(i = 0; i < num; i++)
	{
		if(strcmp(stu[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

  //显示单条学生信息
void stu_alone(int index)
{
	printf("\n\t学号\t姓名\t成绩\t成绩\t成绩\t平均成绩\n");
	printf("--------------------------------------------------------------\n");
	printf("\t%s\t%s\t%5.2f\t%5.2f\t%5.2f\t%5.2f\n", stu[index].ID, stu[index].name, stu[index].score1, stu[index].score2, stu[index].score3, stu[index].Average);
}

	//求平均值
float avg(struct student stu)
{
	return(stu.score1 + stu.score2 + stu.score3) / 3;
}
    //主菜单
int main()
{
	int fig;
	stu_read();

	while(1)
	{
		printf("\n------学生成绩管理系统------\n");
		printf("1.增加学生记录\n");
		printf("2.修改学生记录\n");
		printf("3.删除学生记录\n");
		printf("4.按姓名查询学生成绩\n");
		printf("5.按平均成绩排序\n");
		printf("6.退出\n");

		printf("请选择(1-6)：");
		scanf("%d", &fig);

		switch(fig)
		{
			case 1:
				import();
				break;
			case 2:
				amend();
				break;
			case 3:
				del();
				break;
			case 4:
				inquire();
				break;
			case 5:
				sort();
				stu_all();
				break;
			case 6:
				exit(0);
				break;
		}
		stu_write();

	}

}
	//增加学生记录
int import()
{
	while(1)  //无限循环，直至有break
	{
		printf("请输入学号：");
		scanf("%s", &stu[num].ID);
		getchar();

		printf("请输入姓名：");
		scanf("%s", &stu[num].name);
		getchar();

		printf("请输入成绩：");
		scanf("%f", &stu[num].score1);
		getchar();

		printf("请输入成绩：");
		scanf("%f", &stu[num].score2);
		getchar();

		printf("请输入成绩：");
		scanf("%f", &stu[num].score3);
		getchar();

		stu[num].Average = avg(stu[num]);
		num++;

		printf("是否继续？(y/n):");
		if( getchar() == 'n')
		{
			break;
		}

	}
}

	//修改学生记录
int amend()
{
	while(1)
	{
		char id[10];
		int index;

		printf("请输入要修改的学生的学号：");
		scanf("%s", &id);
		getchar();	//当你输入函数并且回车的话将直接以迅雷不及掩耳之势完成函数的操作

		index = id_index(id);
		if(index == -1)
		{
			printf("学号不存在\n");
		}
		else
		{
			printf("你要修改的学生信息如下：");
			stu_alone(index);
			printf("---请输入新值---\n");

			printf("请输入学号：");
			scanf("%s", &stu[index].ID);
			getchar();
	
			printf("请输入姓名：");
			scanf("%s", &stu[index].name);
			getchar();
	
			printf("请输入成绩：");
			scanf("%f", &stu[index].score1);
			getchar();
	
			printf("请输入成绩：");
			scanf("%f", &stu[index].score2);
			getchar();
	
			printf("请输入成绩：");
			scanf("%f", &stu[index].score3);
			getchar();
	
			stu[index].Average = avg(stu[index]);
			
			printf("是否继续？(y/n):");
			if( getchar() == 'n')
			{
				break;
			}
		}

	}
}

	//删除学生记录
int del()
{
	int i;
	while(1)
	{
		char id[40];
		int index;

		printf("请输入要删除的学生的学号：");
		scanf("%s", &id);
		getchar();

		index = id_index(id);
		if(index == -1)
		{
			printf("学号不存在\n");
		}
		else
		{
			printf("你要删除的学生信息如下：\n");
			stu_alone(index);

			printf("是否真的要删除？(y/n)：");
			if(getchar() == 'y')
			{
				for(i = index; i < num - 1; i++)
				{
					stu[i] = stu[i + 1];	//把后面都向前移
				}
				num--;
			}
			getchar();
		}

			printf("是否继续？(y/n):");
			if( getchar() == 'n')
			{
				break;
			}

	}
}

	//按姓名查询学生记录
int inquire()
{
	while(1)
	{
		char n[20];
		char index;

		printf("请输入要查询的学生的姓名：");
		scanf("%s", &n);
		getchar();

		index = name_index(n);
		if(index == -1)
		{
			printf("不存在该学生！\n");
		}
		else
		{
			printf("你要查询的学生信息为：\n");
			stu_alone(index);

			printf("是否继续？(y/n):");
			if( getchar() == 'n')
			{
				break;
			}
		}

	}
}

	//按平均成绩排序
int sort()
{
	int i, j;
	struct student temp;

	for(i = 0; i < num; i++)
	{
		for(j = i + 1; j < num; j++)
		{
			if(stu[i].Average < stu[j].Average)
			{
				temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}
		}
	}
}

  //显示所有学生信息
int stu_all()
{
	int i;
	printf("\t学号\t姓名\t成绩\t成绩\t成绩\t平均成绩\n");
	printf("--------------------------------------------------------------\n");

	for(i = 0; i < num; i++)
	{
		printf("\t%s\t%s\t%5.2f\t%5.2f\t%5.2f\t%5.2f\n", stu[i].ID, stu[i].name, stu[i].score1, stu[i].score2, stu[i].score3, stu[i].Average);
	}

}

  //将学生信息从文件读出
int stu_read()
{
	FILE *fp;
	int i;

	if( !(fp = fopen("spms.txt", "rb")))
	{
		printf("不能打开文件！");
		return 0;
	}

	for(i = 0; i < num; i++)
	{
		fread(&stu[i], sizeof(struct student), 1, fp);
	}
	fclose(fp);
}

  //将学生信息写入文件
int stu_write()
{
	FILE *fp;
	int i;

	if( !(fp = fopen("spms.txt", "wb")))
	{
		printf("不能打开文件！");
		return 0;
	}

	for(i = 0; i < num; i++)
	{
		if (fwrite(&stu[i], sizeof(struct student), 1, fp) != 1)
		{
			printf("文件写入错误！\n");
			fclose(fp);
		}
	}
}

