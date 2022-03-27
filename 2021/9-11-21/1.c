#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d is grater than %d",a,b);
    }    
    else{
        printf("%d is grater than %d",b,a);    
    }
}