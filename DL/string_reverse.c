//6. Program to reverse a string recursion function

#include<stdio.h>

void display(char* str){
    if(*str == '\0')
        return;
    
    display(str+1);
    printf("%c", *str);
}




int main(){
    char str[20] = {0};
    printf("Enter a string of 20 characters: ");
    scanf("%s", &str);
    printf("String but reverse is: \n");
    display(str);
    return 0;
}