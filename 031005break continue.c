#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//break 立即跳出循环
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

//continue 满足条件则跳出本次循环，执行下一次循环
//打印所有偶数
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