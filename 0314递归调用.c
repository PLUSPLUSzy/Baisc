#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//递归调用,即调用函数本身，但是占用资源比较多
void fun(int a)
{
	if(a==0)
		return;
	fun(a-1);
	printf("%d\n",a);
}

int main02()
{
	int a=10;
	fun(a);
	return 0;
}