
#include <stdio.h>
void swap(int *p, int *q)
{
*p = *p * *q;
*q = *p/ *q;
*p = *p/ *q;
}
int main(){
    int a = 2, b = 0;
    swap(&a,&b);
    printf("%d %d",a,b);
}