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
	strcpy(op.name,"ʷ���ض�");
	strcpy(op.Englishname,"Stur");
	op.levels=90;
	op.potential=6;
	op.at.HP =2000;
	strcpy(op.sk.Skillname,"�ƻ�");
	printf("��Ա��%s\n",op.name);
	printf("Ӣ�����ƣ�%s\n",op.Englishname);
	printf("�ȼ���%d\n",op.levels);
	printf("Ǳ�ܣ�%d\n",op.potential);
	printf("������%d\n",op.at.HP);
	printf("���ܣ�%s\n",op.sk.Skillname);
	return 0;
}