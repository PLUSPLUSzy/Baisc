#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��ʽת��
int main01()
{
	int a=10;
	float b=1.234;
	double sum;
	sum= a * b ;
	printf("sum=%lf\n",sum);
	return 0;
}

//ǿ��ת��
int main02()
{
	float a=1.234;
	int b;
	b =(int)a;//�Ӹ�����ת�������ͣ�������aǿ��ת����int���ͣ����Ҹ�ֵ��b
	printf("%d\n",b);//float->int,ֻȡ�������֣�������������
	return 0;
}