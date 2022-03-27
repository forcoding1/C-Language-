#include<stdio.h>

void fibonaccinthno(int n){
    int a,b,c,i;
    a=0,b=1;
    for(i=1;i<=(n-2);i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);
}

int main(){
    int a;
    printf("Enter the n of the desired nth term of the fibonacci series:\n");
    scanf("%d",&a);  
    printf("The %dth number of the fibonacci series (which starts from 0) is ",a);
    fibonaccinthno(a);
}