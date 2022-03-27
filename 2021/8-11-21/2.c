#include <stdio.h>
int main(){
    float s = 1;
    int a = (s >> 24) & 0xff;
    int b = (s >> 16) & 0xff;
    int c = (s >>  8) & 0xff;
    int d = s & 0xff;
    printf("%d%d%d%d",a,b,c,d);
}