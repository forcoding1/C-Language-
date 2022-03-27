#include <stdio.h>
int main(){
    int a,b,c,e,f,g;
    scanf("%d%d%d",&a,&b,&c);
    e = (a>b)?a:b;
    g = (b>c)?b:c;
    f = (e>g)?g:e;
    printf("%d",f);
}