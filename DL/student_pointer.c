    //5. Program to take student info using struct and calculate average using a function via call by reference

    #include<stdio.h>

    #include<stdio.h>

    typedef struct{
        char name[100];
        float age;
    }
    display;

    int i = 1;

    void students(display* e){
        printf("Name of student %d is : %s \n", i, (*e).name);
        printf("age of student %d is : %d \n", i, (*e).age);
        if(i == 3){
            return;
        }
        i++;
        return(students(e+1));
    }


    int main(){
        
        display e[3];
        
        for(int i = 0; i < 3; i++){
            printf("Enter name of student %d: ", i+1);
            scanf(" %s", &e[i].name);
            printf("Enter age of student %d: ", i+1);
            scanf("%d", &e[i].age);
        }

        students(&e[0]);

        return 0;
    }