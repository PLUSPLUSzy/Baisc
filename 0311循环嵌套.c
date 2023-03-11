#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>

//循环嵌套
int main01()
{
	int i,j;
	for(i=0;i<10;i++)//外层执行一次；内层执行一周。外层执行次数*内层执行次数=总执行次数
	{
		for(j=0;j<10;j++)
		{
			printf("i=%d j=%d\n",i,j); 
		}
	}
	return 0;
}
 
//模拟时钟
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
				Sleep(960);//延时系统960ms，加一个头文件 #include<Windows.h>，Sleep的S要大写
				system("cls");//清屏，加一个头文件 #include<stdlib.h>
			}
		}
	}
	return 0;
}

//打印九九乘法口诀

int main03()
{
	int i,j,s;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)//局部变量优先，内层为列，外层为行；内层走一周，外层走一次
		{
			s=i*j;
			printf("%d*%d=%d",i,j,s);
		}
		printf("\n");//内层循环结束要换行
	}
	return 0;
}