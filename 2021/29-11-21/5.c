#include <stdio.h>
int main(){
    int i,n,j,k;
    scanf("%d",&n);
    j=0;
    for(i=1;i<=n;i++){
        if(i%2==0){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    else{
        for(j=1;j<=i;j++){
            printf("1");
        }
        printf("\n");
    }
    }
}