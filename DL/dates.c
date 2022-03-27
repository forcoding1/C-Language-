//3. Program to collect 2 dates using struct and display earlier date using a function

#include<stdio.h>

typedef struct{
    int d;
    int m;
    int y;
}
display;

void dates(display a, display b){
    if(a.y < b.y)
        printf("First date comes earlier ");
    else if(a.m < b.m)
        printf("First date comes earlier ");
    else if(a.d < b.d)
        printf("First date comes earlier ");
    else if(a.y > b.y)
        printf("Second date comes earlier ");
    else if(a.m > b.m)
        printf("Second date comes earlier ");
    else if(a.d > b.d)
        printf("Second date comes earlier ");
 
}

int main(){
    
    display a, b;
    printf("Enter first date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &a.d, &a.m, &a.y);
    printf("Enter second date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &b.d, &b.m, &b.y);

    dates(a, b);

    return 0;
}