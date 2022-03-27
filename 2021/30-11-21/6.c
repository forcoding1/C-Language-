#include <stdio.h>
int main(){
    int i,n,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
         printf("  ");
        for(j=i;j>=1;j--){
            printf("  ");
        }
        for(j=1;j<=n-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    n+=1;
    for(i=1;i<=n;i++){
        for(j=i;j>=1;j--){
            printf("  ");
        }
        for(j=1;j<=n-i;j++){
            printf("* ");
        }
        printf("\n");
    }
}