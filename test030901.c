#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main01()
{
	int a=10;
	//a++;//�ñ���a�������ڵ�ǰ������+1
	//a++��++a������
	//a=a++ *10;//��ʾ�ȼ�����ʽ��ֵ���ټ���a++��ֵ�����=101
	a =++a*10;//��ʾ�ȼ���++a��ֵ���ټ�����ʽ��ֵ��
	//+����ǰ���ȼ��ٳ�
	printf("%d\n",a);
	return 0;
}

//������С��
int main02()
{
	int a=10;
	int b=20;
	printf("%d\n",a<b);//������������棬��������Ϊ1������Ϊ0
	//��=���жϲ����ڣ�==���жϲ�����
	return 0;
}

//�߼�������
int main03()
{
	int a=0;
	int b=10;
	int c=a&&b;
	int d=a||b;
	int e=!a;
	printf("%d\n",c);//�룬ͬ�����棬��ʱΪ0
	printf("%d\n",d);//�򣬴������棬��ʱΪ1
	printf("%d\n",e);//�ǣ�������٣���ʱaΪ�٣���a��Ϊ�棬1
	return 0;
}
