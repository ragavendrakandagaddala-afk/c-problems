#include <stdio.h>
int main() {
    int type;
    int liters;
    int cost=0;
    scanf("%d%d",&type,&liters);
    switch(type){
        case 1:
        cost=liters*105;
        printf("%d",cost);
        break;
        case 2:
        cost=liters*92;
        printf("%d",cost);
        break;
        case 3:
        cost=liters*85;
        printf("%d",cost);
        break;
        default:
        printf("invalid input");
    }
    
    return 0;
}
