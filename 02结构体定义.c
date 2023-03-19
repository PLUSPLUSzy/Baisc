#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//结构体定义和使用
//定义格式
//结构体 结构体名称
//{
//结构体成员列表（不同的数据类型  基本类型  构造类型  指针类型）
//}；

//定义学生结构体信息 存储数据

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

int main02()
{
	//按照结构体成员列表顺序依次初始化数据
	struct stu ss={1001,"志毅",'M',21,75,"上海市奉献区海思路100号"};
	printf("ID:%d\n",ss.id);
	printf("name:%s\n",ss.name);
	printf("sex:%s\n",ss.sex=='M'? "男" : "女");
	printf("age:%d\n",ss.age);
	printf("score:%d\n",ss.score);
	printf("addr:%s\n",ss.addr);
	return 0;
}