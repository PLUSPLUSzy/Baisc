#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//for 循环
int main06()
{
	int i;
	for(i=1;i<11;i++)//先赋值i，再做判断，然后执行下方程序，接着执行第三个表达式，最后执行”判断->程序->表达式->判断->程序->...”的循环
	{
		printf("i=%d\n",i);
	}
	return 0;

}

//计算1~100的和
int main07()
{
	int i;
	int sum =0;
	for(i=1;i<=100;i++)
	{
		sum +=i;//sum=sum+i
		printf("sum=%d\n",sum);
	}
	printf("1~100的和=%d",sum);
	return 0;
}

//小游戏“敲（除）7”：1~100内的数字，凡是7，7的倍数或是个位或十位带7的数字需要敲桌子
int main()
{
	int a;
	for(a=1;a<=100;a++)
	{
		//if条件判断：1.判断个位带7；十位带7；7的倍数。
		if( a%10==7 || a/10==7||a%7==0)
			printf("敲桌子\n");
		else
			printf("%d\n",a);
	}
	return 0;
}