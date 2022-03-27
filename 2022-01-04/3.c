#include <stdio.h>
int main(){
    int i,n,t;
    printf("Enter the size of the ARRAY(even): ");
    scanf("%d", &n);
    int a[n];
    int *b,*c;
    b=&a[0];c=&a[n/2];
    
    // takes array input
    printf("Enter the values:\n");
    for(i=0;i<n;i++){
        scanf("%d", &*b+i);
    }
    
    // changes the array
    
    for(i=0;i<n/2;i++){
        t=*(b+i);
        *(b+i) = *(c+i);
        *(c+i) = t;
    }
    
    // prints both the arrays
    printf("Changed array:\n");
    for(i=0;i<n/2;i++){
        printf("%d ",*b+i);
    }
    printf("\n");
    for(i=0;i<n/2;i++){
        printf("%d ",*c+i);
    }
}