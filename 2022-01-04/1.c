#include <stdio.h>
int main(){
    int i,n;
    int *b;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &*(a+i));
    }
    b=&a[0];
    for(i=0;i<n;i++){
        printf("%d ", *b+i);
    }
}