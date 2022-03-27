#include <stdio.h>

void pd(int n){
    int p;
    if(n!=0)
        printf("%d\n",n%10);
    if(n>0)
        pd(n/10);
    
}

int main(){
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    pd(n);
}