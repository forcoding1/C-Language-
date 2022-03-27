#include <stdio.h>
int main(){
    int i,n,j;
    scanf("%d",&n);
    printf("*\n");
    for(i=1;i<=n;i++){
        printf("*");
        for(j=1;j<=i;j++){
            printf(" ");
        }        
        printf("*\n");
    }
    for(j=n;j>=1;j--){
        printf("* ");
    }
}