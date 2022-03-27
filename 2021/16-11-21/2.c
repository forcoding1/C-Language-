#include <stdio.h>
int main(){
    int a,b;
    a=7;
    b=1;
    while(b<=10){
        printf("7 x %d = %d\n",b,a);
        a+=7;
        b++;
    }
}