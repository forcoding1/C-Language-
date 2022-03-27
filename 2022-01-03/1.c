#include <stdio.h>
int main(){
    int a=1,b=2,t;
    int *c = &a;
    int *d = &b;
    printf("Before:\n%d\n",*c);
    printf("%d\n",*d);
    t=*c;
    *c=*d;
    *d=t;
    printf("After:\n%d\n",*c);
    printf("%d\n",*d);
}