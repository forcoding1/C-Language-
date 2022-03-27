#include <stdio.h>
int main(){
    int a,b,c,d,fin,pw;
    scanf("%d", &a);   
    b=0;
    d=a;
    pw=1;
    while(d>0){
        d = d/10;
        b++;
    }
    c=b/2;
        while(c>0){
        pw*=10;
        c--;
    }
    fin = a/pw;
    fin= fin%pw;
    printf("%d",fin);
}