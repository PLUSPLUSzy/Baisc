#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//while(���ʽ)��������ʽΪ�棬ִ�У����ڵĴ��롣���жϣ���ִ��
int main09()
{
	int i=0;
	while(i<10)//��ѭ����������ִ��ѭ��ʱû��ѭ���ĳ��ڣ����ʽ���Ϊ���õ���
	{
		printf("%d\n",i);
		i++;
	}
	return 0;
}

//��whileѭ������1~100�ĺ�
int main10()
{
	int i=0;
	int sum=0;
	while(i<=100)
	{
		sum+=i;
		i++;
	}
	printf("sum=%d\n",sum);
	return 0;
}

//ˮ�ɻ���: ��100��999֮�䣬��λ������+ʮλ������+��λ���������ڱ��������Ϊˮ�ɻ�����
int main11()
{
	int i=100;
	int a,b,c;
	while(i<=999)
	{
		//��һ���������
		a =i/100;//��λ
		b =i/10%10;//ʮλ
		c =i%10;//��λ
		
		//�ڶ����жϺ��Ƿ���ڱ���
		if(a*a*a + b*b*b + c*c*c==i)
			printf("ˮ�ɻ���=%d\n",i);
			i++;
	}
	return 0;
}

//do...whileѭ��:��ִ����䣬���ж����
int main12()
{
	int i=0;
	do
	{
		
		printf("%d\n",i);
		i++;
	}while(i<=10);
	return 0;
}

//��do...whileѭ������ˮ�ɻ���
int main13()
{
	int a,b,c;
	int i=100;
	do
	{
		a=i/100;
		b=i/10%10;
		c=i%10;
		
		if(pow(a,3) + pow(b,3) + pow(c,3)==i)//��ѧ������pow��a��3���������ģ����ٴ���
		{
			printf("ˮ�ɻ�����%d\n",i);
		}
		i++;
	}while(i<1000);
	return 0;
}