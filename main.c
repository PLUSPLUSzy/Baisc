#include <stdio.h>
#include<string.h>

int main() {
    int len,i;
    char c[100];
    char d[100];
    gets(c);
    len=strlen(c);
    for(i=0;i<len;i++)
    {
        d[i]=c[len-1-i];
    }
    int result = strcmp(c, d);
    if (result < 0)
    {
        printf("%d\n",-1);
    }
    else if (result > 0)
    {
        printf("%d\n", 1);
    }
    else {
        printf("%d\n", 0);
    }
    return 0;
}
