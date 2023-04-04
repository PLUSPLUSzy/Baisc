#include <stdio.h>

int main() {
    int a[100];
    int b,i,c=0;
    scanf("%d",&b);
    for(int i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
        if(a[i]==2)
        {
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
