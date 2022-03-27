#include <stdio.h>
int main(){
    int fir,sec,thi,total,dtotal,fdis,fdisprice,ad,adp,adt,bd,bdt,bdp,cd,cdt,cdp;
    scanf("%d%d%d", &fir,&sec,&thi);
    //single items discount
    ad = bd=cd=0;
    if(fir>3000){
        ad =5;
    }
    else if(fir>2000){
        ad=2;
    }
    if(sec>3000){
        bd =5;
    }
    else if(sec>2000){
        bd=2;
    }
    if(thi>3000){
        cd =5;
    }
    else if(thi>2000){
        cd=2;
    }
    //calculations
    adp= (ad*fir)/100;
    adt = fir - adp;
    bdp= (bd*sec)/100;
    bdt = sec - bdp;
    cdp= (cd*thi)/100;
    cdt = thi - cdp;
    dtotal = adt+bdt+cdt;
    //combined items discount and calculations
    if(dtotal>5000){
        fdis=30;
    }
    else if (dtotal>3000){
        fdis = 20;
    }
    else if (dtotal>1000){
        fdis = 10;
    }
    else{
        fdis = 0;
    }
    fdisprice= (fdis*dtotal)/100;
    total = dtotal - fdisprice;
    printf("items\tamount\tdis-perc\tdis-amt\n");
    printf("1.\t%d\t%d\t\t%d\n2.\t%d\t%d\t\t%d\n3.\t%d\t%d\t\t%d\n",fir,ad,adp,sec,bd,bdp,thi,cd,cdp);
    printf("total:\t%d\ndiscount-percentage(%d)\tdiscount:%d\n",dtotal,fdis,fdisprice);
    printf("final-price after discount:%d\n\tThank You",total);
}