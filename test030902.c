#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//if语句
int main04()
{
	int score;
	scanf("%d",&score);
	if(score >700)
	{
		printf("我要上清华:%d\n",score);
	}
	return 0;
}

int main05()
{
	int score;
	scanf("%d",&score);
	if(score>700)
		printf("上清华\n");
	else
		printf("上南翔\n");
	return 0;
}

int main06()
{

	int score;
	scanf("%d",&score);
	if(score>699)
		printf("上清华\n");
	else if(score>650)
		printf("上安徽大学\n");
	else
		printf("上南翔\n");
	return 0;
}

//swith语句
int main()
{
	int a;
	scanf("%d",&a);
	switch(a)
	{
case 600:
	printf("进行单抽\n");
	break;
case 6000:
	printf("进行十连抽\n");
	break;
default:
	printf("合成玉不足，进行充值？\n");
	break;
	}
	return 0;
}