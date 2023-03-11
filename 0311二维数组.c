#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//二维数组
int main07()
{
	//数据类型+数组名+[行][列]
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

//求每位学生的总成绩和每门学科的总成绩
int main08()
{
	int arr[4][3]=
	{
		{88,66,88},
		{66,88,66},
		{88,88,88},
		{66,66,66}
	};
	//求每位学生的总成绩
	int sum=0;
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			sum+=arr[i][j];
		}
		printf("第%d名学生的总成绩为：%d\n",i+1,sum);
		sum=0;//重新初始化
	}
	printf("\n");
	//求出没门学科的总成绩，求纵向的和，也就是横纵向数值范围改变
	sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			sum+=arr[j][i];
		}
		printf("第%d门学科的总成绩为：%d\n",i+1,sum);
		sum=0;
	}
	printf("\n");
	return 0;
}