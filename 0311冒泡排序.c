#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ʮֻС������أ��ҵ�����С������
int main05()
{
	int arr[10];
	int i;
	int temp=0;
	for(i=0;i<10;i++)//��һ��forѭ��Ϊarr[]���鸳ֵ
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)//�ڶ���forѭ���������ڱȽϴ�С����ʱ����temp��
	{
		if(temp<arr[i])
			temp=arr[i];
	}
	printf("���С������Ϊ:%d\n",temp);
	return 0;
}

//����  ð������ 
int main()
{
	int arr[10]={9,3,4,7,2,1,8,5,10,6};
	int i,j,temp;
for(i=0;i<9;i++)
{
	for(j=0;j<9-i;j++)
	{
		if(arr[j] > arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
}
for(i=0;i<10;i++)
{
	printf("%d\n",arr[i]);
}
	return 0;
}