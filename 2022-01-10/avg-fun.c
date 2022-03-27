#include <stdio.h>
int avg(int c, int b){
    int s = (c+b)/2;
    return s;
}
int main(){
    int i,j,a;
    i=2,j=4;
    a = avg(i,j);
    printf("Average is %d",a);
}