#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//�ṹ���Ա��ʹ��
//�޸Ľṹ���Ա��Ϣ

struct stu//�ṹ������
{
	//int���   char[]����   char�Ա�   int�ɼ�   int����   char[]��ַ
	int id;
	char name[21];
	char sex;
	int age;
	int score;
	char addr[51];
};

int main03()
{
	//���սṹ���Ա�б�˳�����γ�ʼ������
	struct stu ss={1001,"־��",'M',21,75,"�Ϻ��з�������˼·100��"};

	ss.id=1003;//�޸���������

	strcpy(ss.name,"����");//�޸��ַ������ͣ���ַ�����ַ�������

	printf("ID:%d\n",ss.id);
	printf("name:%s\n",ss.name);
	printf("sex:%s\n",ss.sex=='M'? "��" : "Ů");
	printf("age:%d\n",ss.age);
	printf("score:%d\n",ss.score);
	printf("addr:%s\n",ss.addr);
	return 0;
}