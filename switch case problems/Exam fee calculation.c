#include <stdio.h>
int main() {
    int type;
    scanf("%d",&type);
    switch(type){
        case 1:
        if(type==1){
            type=1200;
            printf("%d",type);
        }else{
            printf("invalid input");
        }break;
        
        case 2:
        if(type==2){
            type=800;
            printf("%d",type);
        }else{
            printf("invalid input");
        }break;
        case 3:
        if(type==3){
            type=500;
            printf("%d",type);
        }else{
            printf("invalid input");
        }break;
        default:
        printf("invalid type");
    }
    
    return 0;
}
