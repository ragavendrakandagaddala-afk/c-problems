#include <stdio.h>
int main() {
    int type;
    int price;
    scanf("%d",&type);
    switch(type){
        case 1:
        price=0;
        printf("₹%d",price);
        break;
        case 2:
        price=500;
        printf("₹%d",price);
        break;
        default:
        printf("invalid input");

    }
    
    return 0;
}
