#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
//�����
//�����֣����һ��1~100֮�������ͨ�������������ݣ������������������ʾ
int main01()
{
	int value;//�û��������ֵ
	int num;//�����
	srand((unsigned int )time(NULL));
	num=rand()%100+1;//���������Ϊ1~100
	while(1)//����һ����ѭ��
	{
		scanf("%d",&value);
		if(value<num)
		{
			printf("�������ֵ̫С��\n");
		}
		else if(value>num)
		{
			printf("�������ֵ̫����\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;//ע��Ҫ����ѭ��
		}
	}
	return 0;
}