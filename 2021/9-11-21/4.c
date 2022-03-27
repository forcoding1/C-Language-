#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    if(a>1){
        b = 1;
        if(a>10){
            b = 2;
            if(a>100){
                b = 3;
                if(a>1000){
                b = 4;
                    if(a>10000){
                    b = 5;
                    }
                }
            }
        }
    }    
    printf("The number of in %d digits are:%d",a,b);
}