#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//#define PI 3.1415
//定义一个常量 用const修饰；用#define PI 3.1415
int main01()
{
	const float pi = 3.1415;//此时pi无法被改变

	return 0;
}

//auto 定义变量
int main()
{
	//auto float pi=3.14;
	 float pi=3.14;
	printf("%f\n",pi);
	return 0;
}