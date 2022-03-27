/*
7. Program to take a string and display a pattern using recursive function
abcde
bcde
cde
de
e
*/

#include<stdio.h>

void display(char* str){
    if(*str=='\0')
        return;

    printf("%s",str);
    printf("\n");
    
    display(str+1);
}


int main(){
    char str[20] = {0};
    printf("Enter a string of 20 characters:\n");
    scanf("%s", &str);

    printf("Pattern is:\n");
    display(str);

    return 0;
}