#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ַ����ıȽ�
int main()
{
	char arr1[]="hello world";
	char arr2[]="hallo world";
	int i=0;
	while(arr1[i]==arr2[i])
	{
		if(arr1[i]=='\0')//�ж������ַ�������β�Ƿ���ͬ���������ͬ��������whileѭ�������ֱ��\0����ͬ�������ifѡ���ӡ
		{
			printf("�����ַ�����ͬ\n");
			return 0;
		}
		i++;
	}
	printf("�����ַ�������ͬ\n");
	return 0;
}