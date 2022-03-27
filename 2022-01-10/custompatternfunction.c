
#include<stdio.h>

void customfunc(int a,int b,char c){
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            printf("%c ",c);
        }
        printf("\n");
    }
}

int main()
{
    customfunc(3,2,'-');
    printf("AB\n");
    customfunc(6,3,'=');
    printf("DF\n");
    customfunc(2,5,'*');

    return 0;
}