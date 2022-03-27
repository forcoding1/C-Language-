#include<stdio.h>

int main()
{
    int i,j,k,l,m,n;
    char a[20];
    printf("Enter a string of 20 characters:\n");
    scanf("%s",a);

    printf("\nThe entered string is ");
    for(int x=0;x<20;x++){
        printf("%c",a[x]);
    }

    char *b=a;
    char *c=a+4;
    char *d=a+8;
    char *e=a+12;
    char *f=a+16;

    printf("\n");
    for(i=0;i<4;i++)
    {
        printf("%c",*(b+i));
    }
    printf("\n");
    for(j=0;j<4;j++){
        printf("%c",*(c+j));
    }
    printf("\n");
    for(k=0;k<4;k++){
        printf("%c",*(d+k));
    }
    printf("\n");
    for(l=0;l<4;l++){
        printf("%c",*(e+l));
    }
    printf("\n");
    for(m=0;m<4;m++){
        printf("%c",*(f+m));
    }
}
