#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<time.h>
#include<stdio.h>

int main02()
{
	int num;
	int v;
	srand((unsigned int)time(NULL));
	num=rand()%100+1;
	while(1)
	{
		scanf("%d",&v);
		if(v<num)
		{
			printf("�������ֵ̫С��\n");
		}
		else if(v>num)
		{
			printf("�������ֵ̫����\n");
		}
		else
		{
			printf("��ϲ�㣬�����\n");
			break;
		}
	}
	return 0;
}

