#include <stdio.h>
int dis(int *a,int l){
    int i,max;
    for(i=0;i<l;i++){
        printf("%d ",a[i]);
    }
    for (i = 1; i < l; i++)
        if (a[i] > max)
            max = a[i];
    printf("\nThe max element in the array is:%d",max);
}
int main(){
    int i,n;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++){
        scanf("%d", &*(b+i));
    }
    dis(b,n);
}