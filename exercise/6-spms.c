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

struct student stu[1000];	//����ѧ������
int num = 0;	//ȫ�ֱ�����������¼��ļ�¼����

 //ͨ��ѧ�ŷ��������±�
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
  //ͨ���������������±�
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

  //��ʾ����ѧ����Ϣ
void stu_alone(int index)
{
	printf("\n\tѧ��\t����\t�ɼ�\t�ɼ�\t�ɼ�\tƽ���ɼ�\n");
	printf("--------------------------------------------------------------\n");
	printf("\t%s\t%s\t%5.2f\t%5.2f\t%5.2f\t%5.2f\n", stu[index].ID, stu[index].name, stu[index].score1, stu[index].score2, stu[index].score3, stu[index].Average);
}

	//��ƽ��ֵ
float avg(struct student stu)
{
	return(stu.score1 + stu.score2 + stu.score3) / 3;
}
    //���˵�
int main()
{
	int fig;
	stu_read();

	while(1)
	{
		printf("\n------ѧ���ɼ�����ϵͳ------\n");
		printf("1.����ѧ����¼\n");
		printf("2.�޸�ѧ����¼\n");
		printf("3.ɾ��ѧ����¼\n");
		printf("4.��������ѯѧ���ɼ�\n");
		printf("5.��ƽ���ɼ�����\n");
		printf("6.�˳�\n");

		printf("��ѡ��(1-6)��");
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
	//����ѧ����¼
int import()
{
	while(1)  //����ѭ����ֱ����break
	{
		printf("������ѧ�ţ�");
		scanf("%s", &stu[num].ID);
		getchar();

		printf("������������");
		scanf("%s", &stu[num].name);
		getchar();

		printf("������ɼ���");
		scanf("%f", &stu[num].score1);
		getchar();

		printf("������ɼ���");
		scanf("%f", &stu[num].score2);
		getchar();

		printf("������ɼ���");
		scanf("%f", &stu[num].score3);
		getchar();

		stu[num].Average = avg(stu[num]);
		num++;

		printf("�Ƿ������(y/n):");
		if( getchar() == 'n')
		{
			break;
		}

	}
}

	//�޸�ѧ����¼
int amend()
{
	while(1)
	{
		char id[10];
		int index;

		printf("������Ҫ�޸ĵ�ѧ����ѧ�ţ�");
		scanf("%s", &id);
		getchar();	//�������뺯�����һس��Ļ���ֱ����Ѹ�ײ����ڶ�֮����ɺ����Ĳ���

		index = id_index(id);
		if(index == -1)
		{
			printf("ѧ�Ų�����\n");
		}
		else
		{
			printf("��Ҫ�޸ĵ�ѧ����Ϣ���£�");
			stu_alone(index);
			printf("---��������ֵ---\n");

			printf("������ѧ�ţ�");
			scanf("%s", &stu[index].ID);
			getchar();
	
			printf("������������");
			scanf("%s", &stu[index].name);
			getchar();
	
			printf("������ɼ���");
			scanf("%f", &stu[index].score1);
			getchar();
	
			printf("������ɼ���");
			scanf("%f", &stu[index].score2);
			getchar();
	
			printf("������ɼ���");
			scanf("%f", &stu[index].score3);
			getchar();
	
			stu[index].Average = avg(stu[index]);
			
			printf("�Ƿ������(y/n):");
			if( getchar() == 'n')
			{
				break;
			}
		}

	}
}

	//ɾ��ѧ����¼
int del()
{
	int i;
	while(1)
	{
		char id[40];
		int index;

		printf("������Ҫɾ����ѧ����ѧ�ţ�");
		scanf("%s", &id);
		getchar();

		index = id_index(id);
		if(index == -1)
		{
			printf("ѧ�Ų�����\n");
		}
		else
		{
			printf("��Ҫɾ����ѧ����Ϣ���£�\n");
			stu_alone(index);

			printf("�Ƿ����Ҫɾ����(y/n)��");
			if(getchar() == 'y')
			{
				for(i = index; i < num - 1; i++)
				{
					stu[i] = stu[i + 1];	//�Ѻ��涼��ǰ��
				}
				num--;
			}
			getchar();
		}

			printf("�Ƿ������(y/n):");
			if( getchar() == 'n')
			{
				break;
			}

	}
}

	//��������ѯѧ����¼
int inquire()
{
	while(1)
	{
		char n[20];
		char index;

		printf("������Ҫ��ѯ��ѧ����������");
		scanf("%s", &n);
		getchar();

		index = name_index(n);
		if(index == -1)
		{
			printf("�����ڸ�ѧ����\n");
		}
		else
		{
			printf("��Ҫ��ѯ��ѧ����ϢΪ��\n");
			stu_alone(index);

			printf("�Ƿ������(y/n):");
			if( getchar() == 'n')
			{
				break;
			}
		}

	}
}

	//��ƽ���ɼ�����
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

  //��ʾ����ѧ����Ϣ
int stu_all()
{
	int i;
	printf("\tѧ��\t����\t�ɼ�\t�ɼ�\t�ɼ�\tƽ���ɼ�\n");
	printf("--------------------------------------------------------------\n");

	for(i = 0; i < num; i++)
	{
		printf("\t%s\t%s\t%5.2f\t%5.2f\t%5.2f\t%5.2f\n", stu[i].ID, stu[i].name, stu[i].score1, stu[i].score2, stu[i].score3, stu[i].Average);
	}

}

  //��ѧ����Ϣ���ļ�����
int stu_read()
{
	FILE *fp;
	int i;

	if( !(fp = fopen("spms.txt", "rb")))
	{
		printf("���ܴ��ļ���");
		return 0;
	}

	for(i = 0; i < num; i++)
	{
		fread(&stu[i], sizeof(struct student), 1, fp);
	}
	fclose(fp);
}

  //��ѧ����Ϣд���ļ�
int stu_write()
{
	FILE *fp;
	int i;

	if( !(fp = fopen("spms.txt", "wb")))
	{
		printf("���ܴ��ļ���");
		return 0;
	}

	for(i = 0; i < num; i++)
	{
		if (fwrite(&stu[i], sizeof(struct student), 1, fp) != 1)
		{
			printf("�ļ�д�����\n");
			fclose(fp);
		}
	}
}

