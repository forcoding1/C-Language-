#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d", &a);
    while(a>=1){
    printf("%d\n", a);
    a--;
    }
    c=1;
    scanf("%d", &b);
    while(b<=c){
    printf("%d\n", c);
    c++;
    }
}