#include <stdio.h>
int dis(int *a,int l,int pos){
    int i;
    for(i=0;i<l;i++){
        if(a[pos]!=a[i])
        a[i] = a[i] + a[pos];
    }    
}
int main(){
    int i,n,p;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++){
        scanf("%d", &*(b+i));
    }
    printf("Before:\n");
    for(i=0;i<n;i++){
        printf("%d ", *(b+i));
    }   
    printf("\nEnter the position of the element u want to modify:");
    scanf("%d", &p);
    dis(b,n,p);
        printf("\nAfter:\n");
    for(i=0;i<n;i++){
        printf("%d ", *(b+i));
    }  
}