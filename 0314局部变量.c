#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ȫ�ֱ���
int a=123456;
//�ֲ�����
void test()
{
	int a=123;
	printf("%d\n",a);
}


int main05()
{
	int a=10;
	printf("%d\n",a);
	test();
	return 0;
}