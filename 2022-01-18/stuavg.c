#include <stdio.h>

typedef struct{
    int roll;
    int sem;
    float sub[3];
    float avg;
} stu;

float avg(stu *a){
    (*a).avg=((*a).sub[0]+(*a).sub[1]+(*a).sub[2])/3.0;
}

int main()
{
    stu s;
    printf("Enter roll number of the student:");
    scanf("%d",&s.roll);
    printf("Enter semester number of the student:");
    scanf("%d",&s.sem);
    printf("Enter the marks in three subjects:");

    int i;
    for(i=0;i<3;i++){
        scanf("%f",&s.sub[i]);
    }

    avg(&s);

    printf("Student info:\n");
    printf("Roll Number:\t%d\n",s.roll);
    printf("Semester:\t%d\n",s.sem);
    printf("Average:\t%5.2f",s.avg);
}