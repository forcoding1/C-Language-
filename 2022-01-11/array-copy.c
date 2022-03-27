#include <stdio.h>

int coy(int ar[],int n){
    int i;
    int az[n];
    for(i=0;i<n;i++){
        az[i] = ar[i];
    }
    printf("\nNew Array\n");
    for(i=0;i<n;i++){
        printf("%d ", *(az+i));
    }
}

int main(){
    int b,n,i;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    int a[n];int az[100];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d", &*(a+i));
    }
    printf("Old Array\n");
    for(i=0;i<n;i++){
        printf("%d ", *(a+i));
    }
    coy(a,n);
}