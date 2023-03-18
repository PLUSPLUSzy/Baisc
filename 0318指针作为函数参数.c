#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


void swap(int*a , int*b)
{
	int temp= *a;
	*a= *b;
	*b=temp;
}
void swap2(int a, int b)
{

	int temp=a;
	a=b;
	b=temp;
}


int main01()
{
	int a=10;
	int b=20;
	int* p=&a;
	int* q=&b;
	swap(p,q);
	printf("%d\n%d\n",*p,*q);//地址传递会改变实参数值
	a=3;
	b=5;
	swap2(a,b);
	printf("%d\n%d\n",a,b);//值传递不改变实参数值
	return 0;
}