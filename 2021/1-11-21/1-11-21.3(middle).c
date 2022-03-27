#include <stdio.h>

int main(){
    int a,b,c,d,e,f;
    a = 12345;
    b = a%10;
    c = a%100;
    d = a%1000;
    e = a%10000;
    f = a%100000;
    a /=1000000;
    printf("middle digit is:%d\n", d);
    printf("Three digits in the middle are:%d%d%d", e,d,c);
}