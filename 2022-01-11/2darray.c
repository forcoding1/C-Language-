
#include <stdio.h>
 
int p(int a[3][3]){
    int i, j,max;
    for (i = 0; i < 3; i++)
      for (j = 0; j < 3; j++){
        printf("%d ", a[i][j]);
        if (a[i][j] > max)
            max = a[i][j];  
            } 
    return max;
}   
 
int main(){
    int b[3][3] = {{10, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int c = p(b);
    printf("\nMax element is %d",c);
}