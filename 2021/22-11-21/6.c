#include<stdio.h>

int main()
{
    int n,x,sum,a;
    sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    a=n;
    while (n>0)
    {
        x=n%10;
        sum=(sum*10)+x;
        n=n/10;
    }
    printf("The reverse of %d is %d",a,sum);

    if(a==sum)
    {
        printf("\n%d",a);
    }
    
}