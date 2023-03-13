#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
//随机数
//猜数字：随机一个1~100之间的数，通过键盘输入数据，根据数据输入进行提示
int main01()
{
	int value;//用户输入的数值
	int num;//随机数
	srand((unsigned int )time(NULL));
	num=rand()%100+1;//定义随机数为1~100
	while(1)//定义一个死循环
	{
		scanf("%d",&value);
		if(value<num)
		{
			printf("你输入的值太小了\n");
		}
		else if(value>num)
		{
			printf("你输入的值太大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;//注意要结束循环
		}
	}
	return 0;
}