#define _CRT_SECURE_NO_WARNINGS 1
#include<time.h>
#include<stdio.h>
#include<stdlib.h>


//导入自定义头文件

#include"head.h"

int main()
{

	printf("%d\n",a);
	printf("%d\n",add(10,20));
	return 0;
}

int add(int a , int b)
{
	return a+b;
}