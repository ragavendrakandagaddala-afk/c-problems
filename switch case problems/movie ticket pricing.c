#include <stdio.h>
int main() {
    int type;
    int time;
    int price=0;
    scanf("%d%d",&type,&time);
    switch(type){
        case 1:
        if(time<18){
        price=150;
        printf("%d",price);
        }
        else {
            price=150+50;
            printf("%d",price);
        }break;
        
        case 2:
       if(time<18){
        price=250;
        printf("%d",price);
        }
        else {
            price=250+50;
            printf("%d",price);
        }break;
        default:
        printf("Invalid type");

    }
    
    return 0;
}
