#include <stdio.h>
int main(){
    int lp,d,m,y,days;
    scanf("%d%d%d",&d,&m,&y);
    if(y%4==0 && y%100 !=0 || y%100==0 && y%400==0){
        lp = 1;
    }
    else{
        lp = 0;
    }
    days = d - 31;
    switch(m){
        case 12:days+=31;
        case 11:days+=30;
        case 10:days+=31;
        case 9:days+=30; 
        case 8:days+=31;
        case 7:days+=31;
        case 6:days+=30;
        case 5:days+=31;
        case 4:days+=30;
        case 3:days+=31;
        case 2:if(lp==0){
            days+=28;
        }
        else{
            days+=29;
        }
        case 1:days+=31;
    }
    printf("%d are the number of days from jan 1st",days);
}