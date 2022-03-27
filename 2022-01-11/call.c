#include <stdio.h>
int val(int a){
    printf("This is using value:%d\n",a);

}
int ref(int *a){
    printf("This is using reference:%d\n",*a);
}
int main(){
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
    val(a);
    ref(&a);
}