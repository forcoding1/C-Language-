#include <stdio.h>
int main(){
    int a,b,c,max,min;
    printf("Enter 3 numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    int *d=&a;
    int *e=&b;
    int *f=&c;
    if( (*d > *e) && (*d > *f) )
    max=*d;
    else if(*e > *f)
    max=*e;
    else
    max=*f;

    if( (*d < *e) && (*d < *f) )
    min=*d;
    else if(*e < *f)
    min=*e;
    else
    min=*f;

    printf("Max:%d\n",max);
    printf("Min:%d\n",min);
}