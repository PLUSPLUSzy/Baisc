#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//全局变量
int a=123456;
//局部变量
void test()
{
	int a=123;
	printf("%d\n",a);
}


int main05()
{
	int a=10;
	printf("%d\n",a);
	test();
	return 0;
}