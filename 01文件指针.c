#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main01()
{
	FILE* fp;
	//fopen (�ļ�·�� �� �򿪷�ʽ) ���ļ�
	//�򿪷�ʽ r ֻ���� w д��ʽ�� a ��׷�ӷ�ʽ
	fp = fopen("D:/a.txt","r");

	//�Դ򿪵��ļ������ж�
	if(fp==NULL)
	{
		printf("FAIL\N");
		return -1;
	}
	printf("SUCCESS:%p\n",fp);
	//���Ҫ�ر��ļ�
	fclose(fp);
	return 0;
}