#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a=10;
	//&a ��ȡ����a���ڴ��ַ
	//ָ�����Ͷ���
	int* p=&a;//p��ָ�������int* ��ָ������
	p=&a;//��ַ���
	printf("%p\n",p);

	//ȡֵ
	printf("%d\n",*p);//*��ָ��ָ���������ȡֵ����


	//��Ӹ�ֵ
	*p=20;
	printf("%d\n",a);
	return 0;
}