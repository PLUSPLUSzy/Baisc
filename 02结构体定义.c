#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ṹ�嶨���ʹ��
//�����ʽ
//�ṹ�� �ṹ������
//{
//�ṹ���Ա�б���ͬ����������  ��������  ��������  ָ�����ͣ�
//}��

//����ѧ���ṹ����Ϣ �洢����

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

int main02()
{
	//���սṹ���Ա�б�˳�����γ�ʼ������
	struct stu ss={1001,"־��",'M',21,75,"�Ϻ��з�������˼·100��"};
	printf("ID:%d\n",ss.id);
	printf("name:%s\n",ss.name);
	printf("sex:%s\n",ss.sex=='M'? "��" : "Ů");
	printf("age:%d\n",ss.age);
	printf("score:%d\n",ss.score);
	printf("addr:%s\n",ss.addr);
	return 0;
}