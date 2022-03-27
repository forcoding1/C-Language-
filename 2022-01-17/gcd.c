#include<stdio.h>

int d(int a, int b){
    int max, min;
    if(a > b){
        max = a;
        min = b;
    }
    else{
        max = b;
        min = a;
    }
    int c = max % min;
    if(c == 0)
        return min;
    max = min;
    min = c;
    d(max,min);

}



int main(){
    int i, j;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &i, &j);
    int g = d(i, j);
    printf("GCD of numbers %d and %d: %d\n", i, j, g);
}