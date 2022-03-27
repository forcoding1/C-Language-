//2. Program to collect employee info(3) using struct and display it

#include<stdio.h>

typedef struct{
    char name[0];
    int age;
    float performance;
}
display;

int main(){
    
    display a, b, c;
    
    printf("Enter name of employee 1: ");
    scanf("%s", &a.name);
    printf("Enter age of employee 1: ");
    scanf("%d", &a.age);
    printf("Enter performance of employee 1: ");
    scanf("%f", &a.performance);

    printf("Enter name of employee 2: ");
    scanf("%s", &b.name);
    printf("Enter age of employee 2: ");
    scanf("%d", &b.age);
    printf("Enter performance of employee 2: ");
    scanf("%f", &b.performance);

    printf("Enter name of employee 3: ");
    scanf("%s", &c.name);
    printf("Enter age of employee 3: ");
    scanf("%d", &c.age);
    printf("Enter performance of employee 3: ");
    scanf("%f", &c.performance);

    printf("Name of employee 1 is : %s \n", a.name);
    printf("Age of employee 1 is : %d \n", a.age);
    printf("performance of employee 1 is : %f \n", a.performance);

    printf("Name of employee 1 is : %s \n", b.name);
    printf("Age of employee 1 is : %d \n", b.age);
    printf("performance of employee 1 is : %f \n", b.performance);

    printf("Name of employee 1 is : %s \n", c.name);
    printf("Age of employee 1 is : %d \n", c.age);
    printf("performance of employee 1 is : %f \n", c.performance);

    return 0;
}