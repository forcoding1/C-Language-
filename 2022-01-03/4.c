#include <stdio.h>
int main(){
    int i,a[5];
    int *b;
    b=&a[1];
    scanf("%d",b);
    for(i=1;i<=3;i++){
        *(b+i)=*b + 2 * i;
    }
    for(i=0;i<5;i++)
        printf("%d",a[i]);
}