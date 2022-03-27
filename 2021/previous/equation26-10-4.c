#include <stdio.h>

int main(){
    int x, y , z;
    x = 2;
    y = 3;
    z = 1; 
    int nume = x*x*x + 3*x*x -4*z;
    int deno = 7 + 2*y;
    float ans = 0.00;
    ans = (float)nume / deno;
    printf("%lf", ans);
    return 0;
}