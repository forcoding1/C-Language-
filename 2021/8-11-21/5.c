#include <stdio.h>
int main(){
    char inp1,inp2; 
    int a,b,c,d;
    scanf("%c%c", &inp1, &inp2);
    a = inp1 & 0xff;
    c = inp2 & 0xff;
    printf("%d\n%d",a,c);
}
