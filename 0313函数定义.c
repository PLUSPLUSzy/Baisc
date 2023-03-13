#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//函数格式（优点：提高代码阅读性，减少代码冗余）
//返回值类型 函数名（函数参数列表）
//{
//代码体
//返回值
//}
int add(int a, int b)
{
	int sum=a+b;
	return sum;
}
int main03()
{
	int a=10;
	int b=20;
	int sum;
	sum=add(a,b);
	printf("%d\n",sum);
	return 0;
}

void printf_int(int v)
{
	printf("%d\n",v);
	return;
}
int main()
{
	int a;
	a=10;
	printf_int(a);
return 0;
}