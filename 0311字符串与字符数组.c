#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�ַ������ַ�����
int main09()
{
	char arr[10]={'h','e','l','l','o','w','o','r','l','d'};
	int i;
	for(i=0;i<10;i++)
	{
		printf("%c ",arr[i]);
	}
	return 0;
}

//�����ַ���
int main10()
{
	char arr[11]="helloworld";//�ڶ����ַ���ʱĩβ������ַ���������־'\0'
	//�ȼ���char arr[11]={'h','e','l','l','o','w','o','r','l','d'��'\0'};
	//char ch='a';//����һ���ַ�
	//char ch1[]="a";//����һ���ַ���
	printf("%s\n",arr);
	return 0;
}

//�ַ����ĳ�ʼ��
int main11()
{
	char arr[]="helloworld";
	printf("%s\n",arr);
	return 0;
}

//ͨ�����������ַ���
int main12()
{
	char arr[100];
	scanf("%s",arr);//scanf�ڽ�������ʱ�����������ո����\n���У���ʾ����
	return 0;
}