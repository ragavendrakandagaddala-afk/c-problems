#include <stdio.h>
int main() {
    int type;
    int fee=0;
    scanf("%d",&type);
    switch(type){
        case 1:
        if(type==1){
            fee=80000;
            printf("%d",fee);
        }else{
            printf("invalid input");
        }break;
        case 2:
        if(type==2){
            fee=60000;
            printf("%d",fee);
        }else{
            printf("invalid input");
        }break;
        case 3:
        if(type==3){
            fee=45000;
            printf("%d",fee);
        }else{
            printf("invalid input");
        }break;
        default:
        printf("invalid type");
    }
    
    return 0;
}
