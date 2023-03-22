#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main01()
{
	FILE* fp;
	//fopen (文件路径 ， 打开方式) 打开文件
	//打开方式 r 只读； w 写方式； a 以追加方式
	fp = fopen("D:/a.txt","r");

	//对打开的文件进行判断
	if(fp==NULL)
	{
		printf("FAIL\N");
		return -1;
	}
	printf("SUCCESS:%p\n",fp);
	//最后要关闭文件
	fclose(fp);
	return 0;
}