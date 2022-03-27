#include<stdio.h>

typedef struct{
    char name[20];
    int age;
    float marks;
}d;

    int i = 1, t = 0;
    float avg;

void stu(d* a){
    printf("Name of student %d is : %s \n", i, (*a).name);
    printf("Age of student %d is : %d \n", i, (*a).age);
    printf("marks of student %d is : %f \n", i, (*a).marks);
    t = t + (*a).marks;
    if(i == 3){
        avg = t/3.0;
        printf("Average is: %f", avg);
        return;
    }
    i++;
    return(stu(a+1));
}
int main(){
    d a[3];
        for(int i = 0; i < 3; i++){
        printf("Enter name of student %d: ", i+1);
        scanf(" %s", &a[i].name);
        printf("Enter age of student %d: ", i+1);
        scanf("%d", &a[i].age);
        printf("Enter marks of student %d: ", i+1);
        scanf("%f", &a[i].marks);
    }
    stu(&a[0]);
}