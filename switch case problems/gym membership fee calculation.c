#include <stdio.h>
int main() {
    int type;
    int fee=0;
    scanf("%d",&type);
    switch(type){
        case 1:
        if(type>0 && type<=1){
          fee=1500;
          printf("%d",fee);
        }  break;
        case 2:
        if(type>1 && type <=3){
            fee=4000;
            printf("%d",fee);
            break;
        }
        case 3:
        if(type<=6){
            fee=7000;
            printf("%d",fee);
        }break;
        default:
        printf("invalid type");
    }
    return 0;
}
