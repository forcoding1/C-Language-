#include <stdio.h>
int main(){
    int a,fir,las,mid,midsq,res,o,t;
    a = 5052;
    mid = (a/10)%100;
    las = a%10;
    fir = a/1000;
    midsq = mid*mid;
    o = fir*10 + las;
    t = las*10 + fir;
    res = midsq == o || midsq ==t;
    printf("%d",res);
}