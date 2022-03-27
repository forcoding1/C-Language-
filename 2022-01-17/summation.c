#include <stdio.h>
int s(int n) {
    if (n!=0)
        return n + s(n-1);
    else
        return n;
}

int main() {
    int n=10;
    printf("Sum = %d", s(n));
}