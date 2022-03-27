#include <stdio.h>
typedef struct{
    char name[20];
    int id;
    double grosssalary;
    double basicsalary;
} emp;

void d(emp *x){
    printf("\nEmployee-1 info:\n");
    printf("ID\t\t:%d\n",(*x).id);
    printf("Name\t\t:%s\n",(*x).name);
    printf("Basic Salary\t:%lf\n",(*x).basicsalary);

    (*x).grosssalary=(*x).basicsalary+((0.1)*((*x).basicsalary))+((0.2)*((*x).basicsalary));

    printf("Gross Salary\t:%lf\n",(*x).grosssalary);

    printf("\nEmployee-2 info:\n");
    printf("ID\t\t:%d\n",(*(x+1)).id);
    printf("Name\t\t:%s\n",(*(x+1)).name);
    printf("Basic Salary\t:%lf\n",(*(x+1)).basicsalary);

    (*(x+1)).grosssalary=(*(x+1)).basicsalary+((0.1)*((*(x+1)).basicsalary))+((0.2)*((*(x+1)).basicsalary));

    printf("Gross Salary\t:%lf\n",(*(x+1)).grosssalary);

    printf("\nEmployee-3 info:\n");
    printf("ID\t\t:%d\n",(*(x+2)).id);
    printf("Name\t\t:%s\n",(*(x+2)).name);
    printf("Basic Salary\t:%lf\n",(*(x+2)).basicsalary);

    (*(x+2)).grosssalary=(*(x+2)).basicsalary+((0.1)*((*(x+2)).basicsalary))+((0.2)*((*(x+2)).basicsalary));

    printf("Gross Salary\t:%lf\n",(*(x+2)).grosssalary);
}

int main(){
    emp a[3];

    printf("Enter ID of employee-1:");
    scanf("%d",&a[0].id);
    printf("Enter name of employee-1:");
    scanf(" %[^\n]s",a[0].name);
    printf("Enter basic salary of employee-1:");
    scanf("%lf",&a[0].basicsalary);

    printf("Enter ID of employee-2:");
    scanf("%d",&a[1].id);
    printf("Enter name of employee-2:");
    scanf(" %[^\n]s",a[1].name);
    printf("Enter basic salary of employee-2:");
    scanf("%lf",&a[1].basicsalary);

    printf("Enter ID of employee-3:");
    scanf("%d",&a[2].id);
    printf("Enter name of employee-3:");
    scanf(" %[^\n]s",a[2].name);
    printf("Enter basic salary of employee-3:");
    scanf("%lf",&a[2].basicsalary);

    d(&a[0]);
}