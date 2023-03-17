#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main01()
{
	int a=10;
	double b=3.14;
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(b));
	return 0;
}

int main02()
{
	int a =10;
	int b =20;
	printf("变量a的内存地址：%p\n",&a);//占位符%p 打印数据的内存地址 无符号int 型十六进制
	printf("变量b的内存地址：%p\n",&b);
	return 0;
}


//指针就是编号，指针变量是存放地址的变量
