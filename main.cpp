#include <iostream>

int main() {
    int i;
    char j;
    float k,sum=0.0;
    scanf("%d %c%f",&i,&j,&k);
    sum=(float)i+k+(j);
    printf("%0.2f",sum);
    return 0;
}
