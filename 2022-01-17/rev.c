#include<stdio.h>

void pr(char* s){
    if(*s == '\0')
        return;
    
    pr(s+1);
    printf("%c ", *s);
}




int main(){
    char s[20] = {0};
    printf("Enter a string: ");
    scanf("%s", &s);
    pr(s);
}