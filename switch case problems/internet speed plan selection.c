#include <stdio.h>
int main() {
    int type;
    scanf("%d",&type);
    switch(type){
        case 1:
        printf("40 Mbps"); //basic
        break;
        case 2:
        printf("100 Mbps"); //standrad
        break;
        case 3:
        printf("300 Mpbs"); //premium
        break;
        default:
        printf("invalid input");
    }
    
    return 0;
}
