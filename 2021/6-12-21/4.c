#include <stdio.h>
int main(){
    int a,b,m,n,k;
    m=3,n=4;
    k=1;
    int c[3][4];
    for(a=0;a<n;a++){
        for(b=0;b<m;b++){
            c[b][a]=k;
            k++;
        }
    }
    for(a=0;a<m;a++){
        for(b=0;b<n;b++){
            printf("%d\t",c[a][b]);
        }
        printf("\n");
    }    
}