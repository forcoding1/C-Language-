#include<stdio.h>

void pr(char* s){
    if(*s=='\0')
        return;

    printf("%s",s);
    printf("\n");
    pr(s+1);
}


int main(){
    char s[20] = {0};
    printf("Enter a string:\n");
    scanf("%s", &s);
    printf("\n");
    pr(s);
}