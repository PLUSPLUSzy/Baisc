#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

struct skills
{
	char Skillname[21];
	int Skilllevel;
};
struct attributes
{
	int atk;
	int def;
	int HP;
	int fee;
	int sp;
};

struct Operators
{
	char name[21];
	char Englishname[21];
	int levels;
	int potential;
	struct attributes at;
	struct skills sk;
};


int main07()
{
	struct Operators op;
	strcpy(op.name,"史尔特尔");
	strcpy(op.Englishname,"Stur");
	op.levels=90;
	op.potential=6;
	op.at.HP =2000;
	strcpy(op.sk.Skillname,"黄昏");
	printf("干员：%s\n",op.name);
	printf("英文名称：%s\n",op.Englishname);
	printf("等级：%d\n",op.levels);
	printf("潜能：%d\n",op.potential);
	printf("生命：%d\n",op.at.HP);
	printf("技能：%s\n",op.sk.Skillname);
	return 0;
}