#include <stdio.h>
int main() {
    int hours;
    scanf("%d",&hours);
    switch(hours){
        case 0:
        case 1:
        printf("short interruotion");
        break;

        case 2:
        case 3:
        case 4:
        printf("medium interruption");
        break;

        default:
        if(hours>4){
            printf("long interruption");
            break;
        }
    }
    return 0;
}
