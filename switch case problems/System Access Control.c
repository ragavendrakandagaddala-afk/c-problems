#include <stdio.h>
int main() {
    int role;
    int time;
    scanf("%d%d",&role,&time);
    switch(role){
        case 1:
        printf("Full access anytime");
        break;
        case 2:
        if(time>=9 && time<=20){
            printf("limited access");
        }
        else{
               printf("Access Denied");
            }break;
        default:
        printf("Invalid type");
    }
    return 0;
}
