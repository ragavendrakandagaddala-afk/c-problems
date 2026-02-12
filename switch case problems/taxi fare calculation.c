#include <stdio.h>
int main() {
    int type;
    int distance;
    scanf("%d%d",&type,&distance);
    switch(type){
        case 1:
        if(type==1){
            printf("%d",distance*10);
        }else {
            printf("invalid input");
        }break;
        case 2:
        if(type==2){
            printf("%d",distance*15);
        }else{
            printf("invalid input");
        }break;
        case 3:
        if(type==3){
            printf("%d",distance*20);
        }else{
            printf("invalid input");
        }break;
        default:
        printf("invalid type");
    }
    
    return 0;
}
