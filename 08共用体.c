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
	union test var;//union test Ϊ����һ�����ͣ����Ժ���Ҫ��һ������
	var.a=100;
	var.d=3.14;
	printf("%d\n",var.a);
	printf("%f\n",var.d);//���������һ�θ�ֵ�����ݲ�����Ч��
	return 0;
}