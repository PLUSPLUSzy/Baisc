#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>

//ѭ��Ƕ��
int main01()
{
	int i,j;
	for(i=0;i<10;i++)//���ִ��һ�Σ��ڲ�ִ��һ�ܡ����ִ�д���*�ڲ�ִ�д���=��ִ�д���
	{
		for(j=0;j<10;j++)
		{
			printf("i=%d j=%d\n",i,j); 
		}
	}
	return 0;
}
 
//ģ��ʱ��
int main02()
{
	int i,j,k;
	for(i=0;i<=24;i++)
	{
		for(j=0;j<60;j++)
		{
			for(k=0;k<60;k++)
			{
				printf("%d : %d : %d\n",i,j,k);
				Sleep(960);//��ʱϵͳ960ms����һ��ͷ�ļ� #include<Windows.h>��Sleep��SҪ��д
				system("cls");//��������һ��ͷ�ļ� #include<stdlib.h>
			}
		}
	}
	return 0;
}

//��ӡ�žų˷��ھ�

int main03()
{
	int i,j,s;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)//�ֲ��������ȣ��ڲ�Ϊ�У����Ϊ�У��ڲ���һ�ܣ������һ��
		{
			s=i*j;
			printf("%d*%d=%d",i,j,s);
		}
		printf("\n");//�ڲ�ѭ������Ҫ����
	}
	return 0;
}