#include <stdio.h>
int main(){
    int i,n,j;
    char a[30];
    n=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++){
        n++;
        if(a[i]==' '){
            printf("%d\n",i);
            n--;
        }
    }
    printf("%s\n%d",a,n);
}