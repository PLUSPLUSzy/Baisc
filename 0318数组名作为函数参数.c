#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//数组名本身就是一个地址 指向数组的首地址

void BubbleSort(int* arr, int len)
{
	int i,j;
	int temp;
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main()
{
	int i;
	int arr[]={8,1,5,9,2,10,6,7,4};
	BubbleSort(arr,10);
	for(i=0;i<10-1;i++)
	{
		printf("%d ",arr[i]);
	}

	return 0;
}