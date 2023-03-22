#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//∂¡»°
int main0201()
{
	FILE* fp;
	char ch;
	fp=fopen("D:/a.txt","r");
	if(fp==NULL)
	{
		printf("FAIL\n");
		return -1;
	}
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c ",ch);
	}
	fclose(fp);
	return 0;
}

//–¥»Î
int main()
{
	FILE* fp;
	char ch='A';
	fp=fopen("D:/b.txt","w");
	if(fp==NULL)
	{
		printf("FAIL\n");
		return -1;
	}
	fputc(ch,fp);
	fclose(fp);
	return 0;
}