#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//结构体成员的使用
//修改结构体成员信息

struct stu//结构体名称
{
	//int编号   char[]姓名   char性别   int成绩   int年龄   char[]地址
	int id;
	char name[21];
	char sex;
	int age;
	int score;
	char addr[51];
};

int main03()
{
	//按照结构体成员列表顺序依次初始化数据
	struct stu ss={1001,"志毅",'M',21,75,"上海市奉献区海思路100号"};

	ss.id=1003;//修改整形数据

	strcpy(ss.name,"传智");//修改字符串类型（地址，”字符串“）

	printf("ID:%d\n",ss.id);
	printf("name:%s\n",ss.name);
	printf("sex:%s\n",ss.sex=='M'? "男" : "女");
	printf("age:%d\n",ss.age);
	printf("score:%d\n",ss.score);
	printf("addr:%s\n",ss.addr);
	return 0;
}