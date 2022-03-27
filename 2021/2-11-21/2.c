#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g,h,i,j,k;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    g = (a>b)?a:b;
    h = (c>d)?c:d;
    i = (e>f)?e:f;
    j = (g>h)?g:h;
    k = (j>i)?j:i;
    printf("%d",k);
}