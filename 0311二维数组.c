#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��ά����
int main07()
{
	//��������+������+[��][��]
	int arr[4][3]=
	{
		{88,66,88},
		{66,88,66},
		{88,88,88},
		{66,66,66}
	};
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//��ÿλѧ�����ܳɼ���ÿ��ѧ�Ƶ��ܳɼ�
int main08()
{
	int arr[4][3]=
	{
		{88,66,88},
		{66,88,66},
		{88,88,88},
		{66,66,66}
	};
	//��ÿλѧ�����ܳɼ�
	int sum=0;
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			sum+=arr[i][j];
		}
		printf("��%d��ѧ�����ܳɼ�Ϊ��%d\n",i+1,sum);
		sum=0;//���³�ʼ��
	}
	printf("\n");
	//���û��ѧ�Ƶ��ܳɼ���������ĺͣ�Ҳ���Ǻ�������ֵ��Χ�ı�
	sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			sum+=arr[j][i];
		}
		printf("��%d��ѧ�Ƶ��ܳɼ�Ϊ��%d\n",i+1,sum);
		sum=0;
	}
	printf("\n");
	return 0;
}