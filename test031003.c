#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//for ѭ��
int main06()
{
	int i;
	for(i=1;i<11;i++)//�ȸ�ֵi�������жϣ�Ȼ��ִ���·����򣬽���ִ�е��������ʽ�����ִ�С��ж�->����->���ʽ->�ж�->����->...����ѭ��
	{
		printf("i=%d\n",i);
	}
	return 0;

}

//����1~100�ĺ�
int main07()
{
	int i;
	int sum =0;
	for(i=1;i<=100;i++)
	{
		sum +=i;//sum=sum+i
		printf("sum=%d\n",sum);
	}
	printf("1~100�ĺ�=%d",sum);
	return 0;
}

//С��Ϸ���ã�����7����1~100�ڵ����֣�����7��7�ı������Ǹ�λ��ʮλ��7��������Ҫ������
int main()
{
	int a;
	for(a=1;a<=100;a++)
	{
		//if�����жϣ�1.�жϸ�λ��7��ʮλ��7��7�ı�����
		if( a%10==7 || a/10==7||a%7==0)
			printf("������\n");
		else
			printf("%d\n",a);
	}
	return 0;
}