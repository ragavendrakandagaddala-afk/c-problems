#include <stdio.h>
int main() {
    int type;
    int score;
    scanf("%d%d",&type,&score);
    switch(type){
        case 1:
        if(score>=700){
            printf("Approved");
        }else if(score<=699 && score >=650){
            printf("manual review");
        }
        break;
        case 2:
        if(score>=700){
            printf("Approved");
        }else {
            printf("rejected");
        }
        break;
        default:
        printf("Invalid type");

    
    }
    return 0;
}
