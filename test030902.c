#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//if���
int main04()
{
	int score;
	scanf("%d",&score);
	if(score >700)
	{
		printf("��Ҫ���廪:%d\n",score);
	}
	return 0;
}

int main05()
{
	int score;
	scanf("%d",&score);
	if(score>700)
		printf("���廪\n");
	else
		printf("������\n");
	return 0;
}

int main06()
{

	int score;
	scanf("%d",&score);
	if(score>699)
		printf("���廪\n");
	else if(score>650)
		printf("�ϰ��մ�ѧ\n");
	else
		printf("������\n");
	return 0;
}

//swith���
int main()
{
	int a;
	scanf("%d",&a);
	switch(a)
	{
case 600:
	printf("���е���\n");
	break;
case 6000:
	printf("����ʮ����\n");
	break;
default:
	printf("�ϳ����㣬���г�ֵ��\n");
	break;
	}
	return 0;
}