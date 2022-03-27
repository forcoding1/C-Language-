#include <stdio.h>
int avg(int c, int b, int *max,int *min){
    int s = (c+b)/2;
    *max = (c>b)?c:b;
    *min = (c<b)?c:b;
    return s;
}
int main(){
    int i,j,a,n,m;
    i=2,j=4;
    a = avg(i,j,&n,&m);
    printf("Average is %d\nMax is %d\nMin is %d",a,n,m);
}