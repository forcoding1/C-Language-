#include <stdio.h>
int main(){
    int a,b,c,pr;
    float sum;
    scanf("%d",&a);
    b=1;
    while(b<=a){
        c=b;
        pr=1;
        while(c>1){
            pr*=c;
            c--;
        }
        sum+=(1.0/pr);
        b++;
    }
    printf("%f\n",sum);
}