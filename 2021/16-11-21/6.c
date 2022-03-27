#include <stdio.h>
int main(){
    int b,c,d,e;
    c=1;
    scanf("%d", &b);
    d=b;
    e=b-1;
    while(c!=d){
        b *= e;
        b--;
        e--;
        c++;
    }
    printf("%d\n", b);
}