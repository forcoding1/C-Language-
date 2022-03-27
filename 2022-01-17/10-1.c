#include <stdio.h>
void pr(int np){
    printf("\n%d\n",np);
    if(np>1)
        pr(np-1);
    else
        return;  
}
int main(){
    int a=10;
    pr(a);
}