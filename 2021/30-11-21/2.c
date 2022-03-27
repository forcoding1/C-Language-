#include <stdio.h>
int main(){
    int i,n,j,k,l;
    scanf("%d",&n);
    k=n*(n+1) / 2;
    l=1;  
    for(i=n;i>=1;i--){
        l = (l + 1) % 2;
        if(l==0){
            for(j=1;j<=i;j++){
            printf("%d",k);
            printf("\t");
            k--;
            }
        }
        else{
            k-=i-1;
            for(j=i;j>=1;j--){
                printf("%d",k);
                printf("\t");
                k++;
            }
        k-=i+1;
        }
        printf("\n");
    }
}