#include <stdio.h>
int main(){
    int b,c;
    c=1;
    scanf("%d", &b);
    while(c<=b){
        printf("%d\n", c);
        c+=2;
    }
}