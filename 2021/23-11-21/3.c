#include <stdio.h>
int main(){
    int pr,i,wd,bal,a,b,c;
    printf("Enter the amt in the following pattern\nPrincipal  Intrest  WithdrawlAmt");
    scanf("%d%d%d", &pr,&i,&wd);
    bal = pr;
    printf("%d Principal amt:%d,Withdwarl amt:%d,Balance:%d\n",c,pr,wd,bal);
    while(bal>wd){
        c=1;
        bal-=wd;
        printf("%d\t%d\t%d\t%d\n",c,pr,wd,bal);
        a = (i*bal) / 100;
        pr-=wd;
        pr+=a;
        bal+=a;
        c++;
    }
}