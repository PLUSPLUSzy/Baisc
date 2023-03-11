#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//字符串的比较
int main()
{
	char arr1[]="hello world";
	char arr2[]="hallo world";
	int i=0;
	while(arr1[i]==arr2[i])
	{
		if(arr1[i]=='\0')//判断两个字符串到结尾是否相同，如果不相同，则跳出while循环，如果直到\0都相同，则进入if选择打印
		{
			printf("两组字符串相同\n");
			return 0;
		}
		i++;
	}
	printf("两组字符串不相同\n");
	return 0;
}