#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a=10;
	//&a 获取变量a的内存地址
	//指针类型定义
	int* p=&a;//p是指针变量；int* 是指针类型
	p=&a;//地址编号
	printf("%p\n",p);

	//取值
	printf("%d\n",*p);//*是指对指针变量进行取值操作


	//间接赋值
	*p=20;
	printf("%d\n",a);
	return 0;
}