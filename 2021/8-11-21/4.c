#include <stdio.h>
int main(){
    int inp,a,b,c,d;
    scanf("%d", &inp);
    a = (inp >> 24) & 0xff;
    b = (inp >> 16) & 0xff;
    c = (inp >>  8) & 0xff;
    d = inp & 0xff;
    printf("%d%d%d%d",d,c,b,a);
}