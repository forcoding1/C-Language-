#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b){
        if(a%4==0 && a%100 !=0 || a%100==0 && a%400==0){
        while(a<b){
            printf("%d\n",a);
            a+=4;
        }
    }  
    }
        else{
        if(b%4==0 && b%100 !=0 || b%100==0 && b%400==0){
            while(b<a){
            printf("%d\n",b);
            b+=4;
        }
        }
    }    
}