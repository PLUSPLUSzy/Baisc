#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    char* p;
    char c;
    scanf("%d",&size);
    p=(char*)malloc(size);
    scanf("%c",&c);//清除缓冲区
    gets(p);
    puts(p);
    free(p);
    return 0;
}
