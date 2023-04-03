#include <stdio.h>

int main() {
    int a,b,c,d,sum,h=0,k=0;
    for(a=1;a<10;a++)
    {
        for(b=1;b<20;b++)
        {
            for(c=1;c<39;c++)
            {
                for(d=1;d<39;d++)
                {
                    k=a+b+c+d;
                    sum=0;
                    sum=a*10+b*5+c*2+d;
                    if(k==40&&sum==100)
                    {
                        h+=1;
                    }
                }
            }
        }
    }
    printf("%d\n",h);
    return 0;
}
