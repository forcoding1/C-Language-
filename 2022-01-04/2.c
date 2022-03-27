#include <stdio.h>
int main(){
    int i,n;
    printf("Length:");
    scanf("%d", &n);
    int a[n];
    int *b;
    b=&a[0];
    printf("Enter the evalues:\n");
    for(i=0;i<n;i++){
        scanf("%d", &*b+i);
    }
    printf("After\n");
    for(i=n-1;i>=0;i--){
        printf("%d ", *b+i);
    }
}