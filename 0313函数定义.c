#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//������ʽ���ŵ㣺��ߴ����Ķ��ԣ����ٴ������ࣩ
//����ֵ���� �����������������б�
//{
//������
//����ֵ
//}
int add(int a, int b)
{
	int sum=a+b;
	return sum;
}
int main03()
{
	int a=10;
	int b=20;
	int sum;
	sum=add(a,b);
	printf("%d\n",sum);
	return 0;
}

void printf_int(int v)
{
	printf("%d\n",v);
	return;
}
int main()
{
	int a;
	a=10;
	printf_int(a);
return 0;
}