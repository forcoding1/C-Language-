#include <stdio.h>
int main(){
    int a,b,m,n,k,l,i;
    printf("Enter the no of rows(m) and columns(n):");
    scanf("%d%d", &m,&n);
    int c[m][n];
    k=1;
    
    for(a=0;a<m;a++){
        for(b=0;b<n;b++){
            c[a][b]=k;
            k++;
        }
    }
    
    // prints matrice
    
    printf("Before\n");
    for(a=0;a<m;a++){
        for(b=0;b<n;b++){
            printf("%d\t",c[a][b]);
        }
        printf("\n");
    }   
    
    //prints upper triangle
    
    for(l=0;l<=n-1;l++){
        for(a=l;a>=0;a--){
            printf("%d ", c[a][l-a]);
        }
    }
    
    //prints lower triangle
    int ct=n;
    for(l=n-1;l>=1;l--){
        i=n-1;
        for(a=l;a>=1;a--){
            printf("%d ", c[i][ct-i]);
            i--;
        }
        ct++;
    }    
}


