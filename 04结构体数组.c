#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//为结构体起别名
typedef struct stu student;


struct stu
{
	int id;
	char name[21];
	char sex;
	int age;
	int score;
	char addr[51];
};



int main04()
{
	int i;
	//定义结构体数组   数组名称   [元素个数]
	student ss[3]=
	{
		
		{1001,"传智小哥",'M',20,99,"北京"},
		{1002,"波妞",'F',18,100,"北京"},
		{1003,"法师",'M',30,101,"黑龙江"}
	};
	//通过   结构体数组[下标].成员   找到对应内容
	//ss[0].id
	for(i=0;i<3;i++)
	{
	printf("ID:%d\n",ss[i].id);
	printf("name:%s\n",ss[i].name);
	printf("sex:%s\n",ss[i].sex=='M'? "男" : "女");
	printf("age:%d\n",ss[i].age);
	printf("score:%d\n",ss[i].score);
	printf("addr:%s\n",ss[i].addr);
	}
	return 0;
}