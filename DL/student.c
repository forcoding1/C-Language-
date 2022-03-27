//1. Program to collect student info using struct and display it using pointers

#include<stdio.h>

typedef struct{
    char name[0];
    int age;
    float gpa;
}
display;

int main(){
    
    display s;
    printf("Enter name of student: ");
    scanf("%s", &s.name);
    printf("Enter age of student: ");
    scanf("%d", &s.age);
    printf("Enter GPA of student: ");
    scanf("%f", &s.gpa);

    printf("Name of student is : %s \n", s.name);
    printf("Age of student is : %d \n", s.age);
    printf("GPA of student is : %f \n", s.gpa);

    return 0;
}