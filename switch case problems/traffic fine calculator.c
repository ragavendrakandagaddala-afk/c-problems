#include <stdio.h>
int main() {
    int type;
    int fee=0;
    scanf("%d",&type);
    switch(type){
        case 1:
        fee=1000; //no helmet
        printf("%d",fee);
        break;
        case 2:
        fee=1500; //signal jump
        printf("%d",fee);
        break;
        case 3:
        fee=2000; //over speeding
        printf("%d",fee);
        break;
        default:
        printf("invalid input");
    }
    
    return 0;
}
