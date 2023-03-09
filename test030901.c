#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main01()
{
	int a=10;
	//a++;//让变量a自增，在当前基础上+1
	//a++与++a的区别
	//a=a++ *10;//表示先计算表达式的值，再计算a++的值，结果=101
	a =++a*10;//表示先计算++a的值，再计算表达式的值；
	//+号在前就先加再乘
	printf("%d\n",a);
	return 0;
}

//大于与小于
int main02()
{
	int a=10;
	int b=20;
	printf("%d\n",a<b);//如果运算结果是真，则输出结果为1，否则为0
	//！=是判断不等于；==是判断不等于
	return 0;
}

//逻辑操作符
int main03()
{
	int a=0;
	int b=10;
	int c=a&&b;
	int d=a||b;
	int e=!a;
	printf("%d\n",c);//与，同真则真，此时为0
	printf("%d\n",d);//或，存真则真，此时为1
	printf("%d\n",e);//非，非真则假，此时a为假，非a则为真，1
	return 0;
}
