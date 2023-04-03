#include <stdio.h>

int main() {
    int i,a=0,b;
    scanf("%d",&i);
    b=i;
    while(b)
    {
        a=a*10+b%10;
        b/=10;
    }
    if(a==i)
    {
        printf("yes\n");
    }else{
        printf("no\n");
    }
    return 0;
}
