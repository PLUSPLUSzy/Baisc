#include <stdio.h>

int change(int* j)
{
    *j/=2;
    return j;
}
int main() {
    int i;
    scanf("%d",&i);
    int* p=&i;
    change(&i);
    printf("%d\n",*p);
    return 0;
}
