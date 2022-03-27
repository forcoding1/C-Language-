#include <stdio.h>
int main(){
    int inp,fir,las,tw,tr;
    scanf("%d", &inp);
    las = inp & 0xff;
    tr = (inp >> 8) & 0xff;
    tw = (inp >> 16) & 0xff;
    fir = (inp >> 24) & 0xff;
    printf("%d%d%d%d",fir,tw,tr,las);
}