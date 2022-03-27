#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b){
        if(b>c){
            if(c>d){
                printf("%d is the gratest",a);
            }
            else{
                printf("%d is the gratest",d);
            }
        }
        else{
            if(c>d){
                printf("%d is the gratest",c);
            }
            else{
                printf("%d is the gratest",d);
            }
            }
    } 
    else{
        if(b>c){
            if(c>d){
                printf("%d is the gratest",b);
            }
            else{
                printf("%d is the gratest",d);
            }
        }
        else{
            if(c>d){
                printf("%d is the gratest",c);
            }
            else{
                printf("%d is the gratest",d);
            }
            }
    }
}