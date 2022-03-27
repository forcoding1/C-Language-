#include <stdio.h>
typedef struct{
    int roll;
    float cgpa;
    char name[20]; 
}stu;

int main(){
    stu d;

    //takes input of student

    printf("Enter the name of the student:");
    scanf("%[^\n]s",&d.name);
    printf("Enter the roll number of %s:",d.name);
    scanf("%d",&d.roll);
    printf("Enter the CGPA of %s:",d.name);
    scanf("%f",&d.cgpa);

    //displays the student info

    printf("Name:\t%s\nRoll:\t%d\nCGPA:\t%f",d.name,d.roll,d.cgpa);
}