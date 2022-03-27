#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d", &a,&b);
    if(a<b){
        while(a!=b){
        if(a%3==0 && a%7==0){
            printf("%d\n",a);
        }
        a++;
        }
    }
    else{
        while(b!=a){
        if(b%3==0 && b%7==0){
            printf("%d\n",b);
        }
        b++;
        }
    }
}