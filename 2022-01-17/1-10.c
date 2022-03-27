#include <stdio.h>
void pr(int np){
    if(np==0)
        return;  
    pr(np-1);
    printf("\n%d\n",np);
}
int main(){
    int a=10;
    pr(a);
}