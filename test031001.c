#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//隐式转换
int main01()
{
	int a=10;
	float b=1.234;
	double sum;
	sum= a * b ;
	printf("sum=%lf\n",sum);
	return 0;
}

//强制转换
int main02()
{
	float a=1.234;
	int b;
	b =(int)a;//从高类型转到低类型，将变量a强制转换成int类型，并且赋值给b
	printf("%d\n",b);//float->int,只取整数部分，不会四舍五入
	return 0;
}