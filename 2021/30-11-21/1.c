#include <stdio.h>
int main(){
    int i,n,j,k;
    scanf("%d",&n);
    k=n*(n+1) / 2;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",k);
            printf("\t");
            k--;
        }
        printf("\n");
    }
}