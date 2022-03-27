#include<stdio.h>

int factorial(int a){
    int prdt=1;
    while(a>=1){
        prdt=prdt*a;
        a-=1;
    }
    return prdt;
}

int main()
{
    int n;
    double sum,sum1,sum2;
    int fact;
    sum1=0;
    sum2=0;
    printf("Enter a number:\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i=i+2){
        fact=factorial(i);
        sum1=sum1+(1.0/fact);
    }

    for(int j=2;j<=n;j=j+2){
        fact=factorial(j);
        sum2=sum2+(fact/1);
    }
    sum=sum1+sum2;
    printf("The sum of the series upto %d is %lf",n,sum);
}