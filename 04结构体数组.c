#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//Ϊ�ṹ�������
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
	//����ṹ������   ��������   [Ԫ�ظ���]
	student ss[3]=
	{
		
		{1001,"����С��",'M',20,99,"����"},
		{1002,"���",'F',18,100,"����"},
		{1003,"��ʦ",'M',30,101,"������"}
	};
	//ͨ��   �ṹ������[�±�].��Ա   �ҵ���Ӧ����
	//ss[0].id
	for(i=0;i<3;i++)
	{
	printf("ID:%d\n",ss[i].id);
	printf("name:%s\n",ss[i].name);
	printf("sex:%s\n",ss[i].sex=='M'? "��" : "Ů");
	printf("age:%d\n",ss[i].age);
	printf("score:%d\n",ss[i].score);
	printf("addr:%s\n",ss[i].addr);
	}
	return 0;
}