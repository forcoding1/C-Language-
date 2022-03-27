#include <stdio.h>
int main(){
    int i,j;
    char n;
    char a[30],r[5];
    scanf("%[^\n]s",a);
    printf("%s\n",a);
    j=4;
    for(i = 0; i < 5; i++){
        r[i] = a[j];
        j--;
    }
    printf("String After reversing first 5\n");
    for(i = 0; i < 5; i++)
        printf("%c", r[i]);
    for(i=5;a[i]!='\0';i++){
        printf("%c",a[i]);
    }
}