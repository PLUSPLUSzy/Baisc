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
	printf("����a���ڴ��ַ��%p\n",&a);//ռλ��%p ��ӡ���ݵ��ڴ��ַ �޷���int ��ʮ������
	printf("����b���ڴ��ַ��%p\n",&b);
	return 0;
}


//ָ����Ǳ�ţ�ָ������Ǵ�ŵ�ַ�ı���
