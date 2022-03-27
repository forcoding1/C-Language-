#include <stdio.h>
void pr(int np){
    printf("\n%d\n",np);
    if(np>2)
        pr(np-2);
    else
        return;  
}
int main(){
    int a=10;
    pr(a);
}