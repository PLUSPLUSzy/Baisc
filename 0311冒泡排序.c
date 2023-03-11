#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//十只小猪称体重，找到最大的小猪体重
int main05()
{
	int arr[10];
	int i;
	int temp=0;
	for(i=0;i<10;i++)//第一个for循环为arr[]数组赋值
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)//第二个for循环是数组内比较大小，临时存入temp。
	{
		if(temp<arr[i])
			temp=arr[i];
	}
	printf("最大小猪体重为:%d\n",temp);
	return 0;
}

//排序  冒泡排序 
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