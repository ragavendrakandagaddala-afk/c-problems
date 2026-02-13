#include <stdio.h>
int main() {
    int type;
    int price=0;
    scanf("%d",&type);
    switch(type){
        case 1:
        price=500;
        printf("₹%d",price);
        break;
        case 2:
        price=1200;
        printf("₹%d",price);
        break;
        default:
        printf("invalid input");

    }
    
    return 0;
}
