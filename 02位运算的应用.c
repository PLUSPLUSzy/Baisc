#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//两数值交换，不使用临时变量

int main()
{
	 int a=10;
	 int b=20;
	 a=a^b;
	 b=a^b;
	 a=a^b;
	 printf("%d\n",a);
	 printf("%d\n",b);
	return 0;
}