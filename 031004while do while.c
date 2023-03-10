#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//while(表达式)：如果表达式为真，执行（）内的代码。先判断，再执行
int main09()
{
	int i=0;
	while(i<10)//死循环：程序在执行循环时没有循环的出口，表达式结果为永久的真
	{
		printf("%d\n",i);
		i++;
	}
	return 0;
}

//用while循环计算1~100的和
int main10()
{
	int i=0;
	int sum=0;
	while(i<=100)
	{
		sum+=i;
		i++;
	}
	printf("sum=%d\n",sum);
	return 0;
}

//水仙花数: 从100到999之间，个位的立方+十位的立方+百位的立方等于本身的数称为水仙花数。
int main11()
{
	int i=100;
	int a,b,c;
	while(i<=999)
	{
		//第一步将数拆分
		a =i/100;//百位
		b =i/10%10;//十位
		c =i%10;//个位
		
		//第二部判断和是否等于本身
		if(a*a*a + b*b*b + c*c*c==i)
			printf("水仙花数=%d\n",i);
			i++;
	}
	return 0;
}

//do...while循环:先执行语句，再判断真假
int main12()
{
	int i=0;
	do
	{
		
		printf("%d\n",i);
		i++;
	}while(i<=10);
	return 0;
}

//用do...while循环运行水仙花数
int main13()
{
	int a,b,c;
	int i=100;
	do
	{
		a=i/100;
		b=i/10%10;
		c=i%10;
		
		if(pow(a,3) + pow(b,3) + pow(c,3)==i)//数学函数：pow（a，3）——数的，多少次幂
		{
			printf("水仙花数：%d\n",i);
		}
		i++;
	}while(i<1000);
	return 0;
}