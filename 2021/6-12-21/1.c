#include <stdio.h>
int main(){
    int i,n,j,l,k;
    l=15;
    int a[15];
    n=5;
    k=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            a[k]=j;
            k++;
        }
    }
    for(i = 0; i < l; i++)
      printf("%d ", a[i]);
}