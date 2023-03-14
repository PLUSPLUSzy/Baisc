#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//bubble≈≈–Ú
//int bubble_sort() = //int BubbleSort()

void BubbleSort(int arr[], int len)
{
	int i,j;
	int temp;
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1-i;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	return;
}

int main01()
{
	int i;
	int arr[10]={9,3,4,7,2,1,8,5,6,10};
	 BubbleSort(arr,10);
	 for (i=0;i<10;i++)
	 {
		 printf("%d ",arr[i]);
	 }
	return 0;
}