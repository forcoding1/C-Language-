#include <stdio.h>
int main(){
    int i;
    int a[5];
    int *p = &a[0];
    scanf("%d",*p);
    for(i=1;i<=4;i++){
        p+i = *p+i;
    }
}