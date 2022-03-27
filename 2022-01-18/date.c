#include <stdio.h>
typedef struct { 
    int d;
    int m;
    int y;
}dt;
void edt(dt a,dt b){
    if(a.y==b.y){
        if(a.m==b.m){
            if(a.d<b.d){
                printf("First date is earlier");
            }
            
            else{
                printf("Second date is earlier");
            }
        }
        
        else{
            if(a.m<b.m){
                printf("First date is earlier");
            }
            
            else{
                printf("Second date is earlier");
            }
        }
    }
        
    else{
        if(a.y<b.y){
            printf("First date is earlier");
        }
            else{
            printf("Second date is earlier");
        }
    }
}
int main(){
    dt d,e;
    printf("Enter a date in the format dd mm yy:");
    scanf("%d %d %d",&d.d,&d.m,&d.y);
    printf("Enter another date in the format dd mm yy:");
    scanf("%d %d %d",&e.d,&e.m,&e.y);
    edt(d,e);
}