#include <stdio.h>
int digits(int a,int *final){
    int i=0,j;
    int c[20];
    while(a>0){
        i=0;
        c[i] = a % 10;;
        a = a / 10;
        i++;
        printf("%d\n",c[i]);
    }
    for(int z=1;z<i;z++){
        if(c[z-1]+c[z+1]==c[z])
            final[z-1]=c[z];
        if(c[z-1]-c[z+1]==c[z]||c[z+1]-c[z-1]==c[z])
            final[z-1]=c[z];
        if(c[z-1]*c[z+1]==c[z])
            final[z-1]=c[z];
        if(c[z-1]/c[z+1]==c[z]||c[z+1]/c[z-1]==c[z])
            final[z-1]=c[z];
        if(c[z-1]%c[z+1]==c[z]||c[z+1]%c[z-1]==c[z])
            final[z-1]=c[z];
    }
}
int main(){
    int a,b[20],*c;
    scanf("%d",&a);
    digits(a,b);
    int i=0;
    while(b[i]!=0){
        printf("%d",b[i]);
        i++;
    }
}