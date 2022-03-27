#include <stdio.h>
int main(){
    int fir,sec,thi,total,dis,distotal,disprice;
    scanf("%d%d%d", &fir,&sec,&thi);
    total = fir+sec+thi;
    if(total>5000){
        dis=30;
    }
    else if (total>3000){
        dis = 20;
    }
    else if (total>1000){
        dis = 10;
    }
    distotal= (dis*total)/100;
    disprice = total - distotal;
    printf("items\tamount\n");
    printf("1.\t%d\n2.\t%d\n3.\t%d\n",fir,sec,thi);
    printf("total:\t%d\ndiscount-percentage(%d)\tdiscount:%d\n",total,dis,distotal);
    printf("final-price after discount:%d\n\tThank You",disprice);
}