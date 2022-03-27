
#include<stdio.h>

typedef struct{
    char n[20];
    int age;
    float sc;
}
d;

int main(){
    
    d a, b, c;
    //input of employee data
    printf("Enter name of employee 1: ");
    scanf("%s", &a.n);
    printf("Enter age of employee 1: ");
    scanf("%d", &a.age);
    printf("Enter score of employee 1: ");
    scanf("%f", &a.sc);

    printf("Enter name of employee 2: ");
    scanf("%s", &b.n);
    printf("Enter age of employee 2: ");
    scanf("%d", &b.age);
    printf("Enter score of employee 2: ");
    scanf("%f", &b.sc);

    printf("Enter name of employee 3: ");
    scanf("%s", &c.n);
    printf("Enter age of employee 3: ");
    scanf("%d", &c.age);
    printf("Enter score of employee 3: ");
    scanf("%f", &c.sc);
    //prints the info 
    printf("Name of employee 1 is : %s \n", a.n);
    printf("Age of employee 1 is : %d \n", a.age);
    printf("score of employee 1 is : %f \n", a.sc);
    printf("Name of employee 1 is : %s \n", b.n);
    printf("Age of employee 1 is : %d \n", b.age);
    printf("score of employee 1 is : %f \n", b.sc);
    printf("Name of employee 1 is : %s \n", c.n);
    printf("Age of employee 1 is : %d \n", c.age);
    printf("score of employee 1 is : %f \n", c.sc);
}