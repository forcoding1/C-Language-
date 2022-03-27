#include <stdio.h>
int main(){
    int a,b,m,n;
    printf("Enter the no of rows(m) and columns(n):");
    scanf("%d%d", &m,&n);
    int c[m][n];
    for(a=0;a<m;a++){
        for(b=0;b<n;b++){
            scanf("%d",&c[a][b]);
        }
    }
    for(a=0;a<m;a++){
        for(b=0;b<n;b++){
            printf("%d ",c[a][b]);
        }
        printf("\n");
    }    
}