#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//Ç¶Ì×µ÷ÓÃ
extern int testB(int a,int b);
int testA(int a, int b)
{
	return testB(a,b);
}
int testB(int a, int b)
{
	return a+b;
}

int main04()
{
	 int a=10;
	 int b=20;
	 int sum;
	 sum=testA(a,b);
	 printf("%d\n",sum);
	return 0;
}