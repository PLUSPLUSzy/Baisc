#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//break ��������ѭ��
int main14()
{
	int i=0;
	while(i<10)
	{
		printf("i=%d\n",i);
		i++;
		if(i==10)
		{
				break;
		}
	} 
	return 0;
}

//continue ������������������ѭ����ִ����һ��ѭ��
//��ӡ����ż��
int main()
{
	int i=0;
	while(i<=100)
	{
		if((i&2) != 0)
		{
			i++;
			continue;//
		}
		printf("%d\n",i);
		i++;
	}
	return 0;
}