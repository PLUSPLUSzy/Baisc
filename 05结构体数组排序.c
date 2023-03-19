#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//此程序输入时出错，只能输入一个人的信息，不能输入第二个
typedef struct stu
{
	int id;
	char name[21];
	int age;
	char sex;
	int score;
}student;

/*
1001 刘备 M,52 98
1002 诸葛亮 M,56 100
1003 小乔 F,22 66
1004 大乔 F,26 88
1005 貂蝉 F,24 77
*/

/*void BubbleSort(student* ss, int len)
{
	int i,j;
	student temp;
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-i-1;j++)
		{
			if(ss[j].score < ss[j+1].score)
			{
				//交换结构体变量，而不是单一内容
				temp=ss[j];
				ss[j]=ss[j+1];
				ss[j+1]=temp;
			}
		}
	}
}*/

int main05()
{
	int i;
	student ss[5];
	for(i=0;i<5;i++)
	{
		scanf("%d%s%d,%c%d",&ss[i].id,ss[i].name,&ss[i].age,ss[i].sex,&ss[i].score);
	}
	
	//BubbleSort(ss,5);
	for(i=0;i<5;i++)
	{
	printf("ID:%d\t",ss[i].id);
	printf("name:%s\t",ss[i].name);
	printf("sex:%s\t",ss[i].sex=='M'? "男" : "女");
	printf("age:%d\t",ss[i].age);
	printf("score:%d\t",ss[i].score);
	}
	return 0;
}