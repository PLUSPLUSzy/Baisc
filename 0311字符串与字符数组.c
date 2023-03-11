#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//字符串与字符数组
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

//定义字符串
int main10()
{
	char arr[11]="helloworld";//在定义字符串时末尾会添加字符串结束标志'\0'
	//等价于char arr[11]={'h','e','l','l','o','w','o','r','l','d'，'\0'};
	//char ch='a';//定义一个字符
	//char ch1[]="a";//定义一个字符串
	printf("%s\n",arr);
	return 0;
}

//字符串的初始化
int main11()
{
	char arr[]="helloworld";
	printf("%s\n",arr);
	return 0;
}

//通过键盘输入字符串
int main12()
{
	char arr[100];
	scanf("%s",arr);//scanf在接受数据时，遇到——空格或者\n换行，表示结束
	return 0;
}