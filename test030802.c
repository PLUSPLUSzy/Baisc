#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//#define PI 3.1415
//����һ������ ��const���Σ���#define PI 3.1415
int main01()
{
	const float pi = 3.1415;//��ʱpi�޷����ı�

	return 0;
}

//auto �������
int main()
{
	//auto float pi=3.14;
	 float pi=3.14;
	printf("%f\n",pi);
	return 0;
}