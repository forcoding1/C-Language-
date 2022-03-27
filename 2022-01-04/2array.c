#include<stdio.h>

int main(){
    int a[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
        printf("Enter value for element at %d %d \n", i, j);
        scanf("%d", &a[i][j]);
        }
    }
    int *b = &a[0][0];
    printf("The array is: ");
    for(int i = 0; i < 9; i++){
        printf("%d ",*(b+i));
    }
}