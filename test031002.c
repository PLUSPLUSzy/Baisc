#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main03()
{
	unsigned int a ;
	scanf("%u",&a);
	if (a<10)
		printf("��λ\n");
	else if(a<100)
		printf("ʮλ\n");
	else if(a<1000)
		printf("��λ\n");
	else 
		printf("�ܴ�\n");
	return 0;
}

//��������Ƕ��
int main04()
{
	int score;
	scanf("%d",&score);
	if(score>699)
	{
		printf("��������廪\n");
		if(score>719)
			printf("������ϼ����רҵ\n");
		else if(score>709)
			printf("�����������רҵ\n");
		else
			printf("������Ͽ���רҵ\n");
	}
	else
		printf("�����������\n");
	return 0;
}

//��Ŀ�����" a ? b : c "
int main05()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("���ֵΪ=%d\n",a>b?a:b);

	/*if(a>b)
		printf("���ֵΪ=%d\n",a);
	else
		printf("���ֵΪ=%d\n",b);*/
	return 0;
}