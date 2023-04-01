#include <iostream>
#include<stdio.h>
#include<string.h>

int main() {
    int i,ret;
    char c;
    double d;
    ret=scanf("%d %c%lf",&i,&c,&d);//123a 3.14多种数据类型混合输入
    printf("i=%d,c=%c,d=%lf",i,c,d);
//    scanf("%d",&i);
//    printf("i=%d\n",i);
//    fflush(stdin);
//    scanf("%c",&c);
//    printf("c=%c\n",c);
    return 0;
}
