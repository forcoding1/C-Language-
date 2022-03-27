#include <stdio.h>
int main(){
    int a = 200;
    if(a%4==0 && a%100 !=0){
        printf("%d is a leap year",a);
    }
    else if(a%100==0 && a%400==0){
        printf("%d is a leap year",a);
    }
    else{
        printf("%d is not a leap year",a);
    }
}