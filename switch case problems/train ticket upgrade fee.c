#include <stdio.h>
int main() {
    int type;
    int fee=0;
    scanf("%d",&type);
    switch(type){
        case 1:
        fee=300;
        printf("₹%d",fee);
        break;
        case 2:
        fee=800;
        printf("₹%d",fee);
        break;
        case 3:
        fee=1500;
        printf("₹%d",fee);
        break;
        default:
        printf("invalid input");
    }
    
    return 0;
}
