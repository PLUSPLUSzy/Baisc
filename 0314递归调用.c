#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ݹ����,�����ú�����������ռ����Դ�Ƚ϶�
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