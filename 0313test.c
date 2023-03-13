#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<time.h>
#include<stdio.h>

int main02()
{
	int num;
	int v;
	srand((unsigned int)time(NULL));
	num=rand()%100+1;
	while(1)
	{
		scanf("%d",&v);
		if(v<num)
		{
			printf("你输入的值太小了\n");
		}
		else if(v>num)
		{
			printf("你输入的值太大了\n");
		}
		else
		{
			printf("恭喜你，答对了\n");
			break;
		}
	}
	return 0;
}

