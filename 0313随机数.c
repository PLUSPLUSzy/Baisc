#define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
//��һ������ͷ�ļ�
#include<time.h>
//time_t//�൱��long����//time(time_t*t)//��ȡ��ǰϵͳʱ��
#include<stdlib.h>
//��������rand()���������ʱ���������

//�ڶ����������������
int main01()
{
	int i;
	//�������������time��ȡ��ǰϵͳʱ�䣬�õ�ǰʱ����Ϊ���������
	srand((unsigned int)time(NULL));

//���������������rand()%10,�õ�0~9֮��������
	for(i=0;i<100;i++)
	{
		printf("%d\n",rand()%100);
	}
	return 0;
}

