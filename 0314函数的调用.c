#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//正确调用
//比较大小

int max(int x,int y)
{
	return x>y ? x : y;
}

int main03()
{
	int a=10;
	int b=20;
	int v;
	v=max(a,b);
	printf("最大值为：%d\n",v);
	return 0;
}

