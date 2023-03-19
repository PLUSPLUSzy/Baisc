#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


union test
{
	char a;
	int b;
	long c;
	float d;
	double e;
};

int main08()
{
	union test var;//union test 为定义一个类型，所以后面要加一个变量
	var.a=100;
	var.d=3.14;
	printf("%d\n",var.a);
	printf("%f\n",var.d);//共用体最后一次赋值的数据才是有效的
	return 0;
}