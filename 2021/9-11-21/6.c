#include <stdio.h>
int main(){
    int fd,fm,fy;
    scanf("%d%d%d",&fd,&fm,&fy);
    if(fm<=12){
        if((fd<=31 && fm==1||3||5||7||8||10||12)||(fd<=30 && fm==2||4||6||9||11)){
            printf("--Is a valid date.--");
        }
        else{
            printf("--Is not a valid date.--");
        }
    }
    else{
        printf("--Is not a valid date.--");
    }

}