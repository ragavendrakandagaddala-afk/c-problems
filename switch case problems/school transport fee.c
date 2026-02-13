#include <stdio.h>
int main() {
    int distance;
    int fee=0;
    scanf("%d",&distance);
    switch(distance){
        case 1:
        if(distance<=5){
            fee=800;
            printf("₹%d",fee);
        }break;
        case 2:
        if(distance<10){
            fee=1200;
            printf("₹%d",fee);
        }    break;
        default:
        if(distance<=10){
            fee=1800;
            printf("₹%d",fee);
        }
    }
    
    return 0;
}
