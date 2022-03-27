#include <stdio.h>

int main(){
    int a, b, multi, sub, add;
    float di;
    scanf("%d%d", &a,&b);
    multi = a*b;
    add = a+b;
    sub = a - b;
    di = (float)a /b;
    printf("add = %d \nsub = %d\nmulti = %d\ndiv = %f\n", add,sub,multi,di);
    a = ++a;
    printf("The value of a++ :%d\n",a);
    b = ++b;
    printf("The value of b++ :%d\n",b);
    a = a++;
    printf("The value of ++a :%d\n",a);
    b = b++;
    printf("The value of ++b :%d\n",b);
}