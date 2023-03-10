#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main03()
{
	unsigned int a ;
	scanf("%u",&a);
	if (a<10)
		printf("个位\n");
	else if(a<100)
		printf("十位\n");
	else if(a<1000)
		printf("百位\n");
	else 
		printf("很大\n");
	return 0;
}

//条件语句的嵌套
int main04()
{
	int score;
	scanf("%d",&score);
	if(score>699)
	{
		printf("你可以上清华\n");
		if(score>719)
			printf("你可以上计算机专业\n");
		else if(score>709)
			printf("你可以上生物专业\n");
		else
			printf("你可以上考古专业\n");
	}
	else
		printf("你可以上蓝翔\n");
	return 0;
}

//三目运算符" a ? b : c "
int main05()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("最大值为=%d\n",a>b?a:b);

	/*if(a>b)
		printf("最大值为=%d\n",a);
	else
		printf("最大值为=%d\n",b);*/
	return 0;
}