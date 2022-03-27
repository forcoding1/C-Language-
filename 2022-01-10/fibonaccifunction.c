#include<stdio.h>

void fibonacciseries(int n){
    int a,b,c;
    int i;
    a=0,b=1;
    printf("%d %d ",a,b);
    for(i=1;i<=(n-2);i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}

int main(){
    int a;
    printf("Enter upto how many terms you want to display the fibonacci series:\n");
    scanf("%d",&a);
    printf("The fibonacci serious upto %d terms is ",a);
    fibonacciseries(a);
}