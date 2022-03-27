//1. Program to display 1 to n using recursion function

#include<stdio.h>

void display(int n){
    if(n == 0)
        return;
    display(n-1);
    printf("%d ", n);
}




int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Numbers from 1 to %d: \n", n);
    display(n);
    return 0;
}