#include <stdio.h>
int main(){
    int b,c,d,a,mul;
    c=1;
    scanf("%d", &b);
    a=b-1;
    mul = 0;
    while(c!=d){
        d = b/a;
        mul += d;
        b--;c--;
    }
}