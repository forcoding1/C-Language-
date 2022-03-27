#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d", &a,&b);
    if(a<b){
        while(a!=b){
            if(a%11==0){
                printf("%d\n",a);
            }
        a++;
        }
    }
    else{
        while(b!=a){
            if(b%11==0){
                printf("%d\n",b);
            }
        b++; 
        }
    }
}