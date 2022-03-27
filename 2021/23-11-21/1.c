#include <stdio.h>
int main(){
    int n,a,b,sum;
    printf("Enter the length of numbers:");
    scanf("%d",&n);
    sum=0;
    printf("Enter the Numbers:");
    while(n>0){
        scanf("%d",&a);
        if(a%2==0){
            sum+=a;
            n--;
        }
    }
    printf("The sum is:%d",sum);
}