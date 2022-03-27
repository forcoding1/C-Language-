#include <stdio.h>

int main(){
    float a;
    int b;
    scanf("%f", &a);
    b = (int)a;
    printf("%d\n",b);
    float c = a - b;
    printf("%f",c);
}