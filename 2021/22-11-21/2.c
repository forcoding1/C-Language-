#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d", &a);   
    b=0;
    while(a>0){
        a = a/10;
        b++;
    }
    printf("%d",b);
}