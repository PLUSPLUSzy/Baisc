#define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
//第一步导入头文件
#include<time.h>
//time_t//相当于long类型//time(time_t*t)//获取当前系统时间
#include<stdlib.h>
//用来设置rand()产生随机数时的随机种子

//第二步创建随机数种子
int main01()
{
	int i;
	//创建随机数种子time获取当前系统时间，让当前时间作为随机数种子
	srand((unsigned int)time(NULL));

//第三步生成随机数rand()%10,得到0~9之间的随机数
	for(i=0;i<100;i++)
	{
		printf("%d\n",rand()%100);
	}
	return 0;
}

