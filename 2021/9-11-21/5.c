#include <stdio.h>
int main(){
    int fd,fm,fy,sd,sm,sy;
    scanf("%d%d%d%d%d%d",&fd,&fm,&fy,&sd,&sm,&sy);
    if(fy>sy){
        printf("The earlier date is: %d,%d,%d",sd,sm,sy);
    }
    if(sy==fy){
        if(fm>sm){
            printf("The earlier date is: %d,%d,%d",sd,sm,sy);
        }
        if(sm>fm){
            printf("The earlier date is: %d,%d,%d",fd,fm,fy);
        }
        else{
            if(sd>fd){
                printf("The earlier date is: %d,%d,%d",fd,fm,fy);
            }
            else{
                printf("The earlier date is: %d,%d,%d",sd,sm,sy);
            }
        }
    }
    else{
        printf("The earlier date is: %d%d%d",fd,fm,fy);
    }
}