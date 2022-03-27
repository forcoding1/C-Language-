#include <stdio.h>
int main(){
    int i,n,j,k;
    scanf("%d",&n);
    k=1;
    for(i=1;i<=n;i++){
        for(j=i;j>=1;j--){
            printf("%d",k);
            printf("\t");
            k++;
        }
        printf("\n");
    }
}