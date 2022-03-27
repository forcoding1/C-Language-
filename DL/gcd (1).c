//5. Program to display GCD of 2 numbers using recursion function

#include<stdio.h>

int display(int x, int y){
    int max, min;
    if(x > y){
        max = x;
        min = y;
    }
    else{
        max = y;
        min = x;
    }
    int r = max % min;
    if(r == 0)
        return min;
    max = min;
    min = r;
    display(max,min);

}



int main(){
    int x, y;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &x, &y);
    int gcd = display(x, y);
    printf("GCD of numbers %d and %d: %d\n", x, y, gcd);
    return 0;
}