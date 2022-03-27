#include <stdio.h>
int main(){
    int a,b,c,sum;
    scanf("%d%d", &a,&b);
    sum=0;
    if(a<b){
        while(a<b){
            c=1;
            while(c<a){
                if(c*c==a){
                    printf("%d\n",a);
                    sum+=a;
                }
                c++;
            }
            a++;
        }
    }
    else{
        while(a<b){
            c=1;
            while(c<a){
                if(c*c==a){
                    printf("%d\n",a);
                    sum+=a;
                }
                c++;
            }
        a++;
    }
}}