#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

struct stu
{
	char name[21];
	int age;
	char sex;

};

int main06()
{
	struct stu ss;
	struct stu s1;
	strcpy(ss.name,"ÓñÍÃ");
	ss.age=18;
	ss.sex='F';
	s1=ss;
	printf("name:%s\n",s1.name);
	printf("sex:%s\n",s1.sex=='M'? "ÄÐ" : "Å®");
	printf("age:%d\n",s1.age);
	return 0;
}