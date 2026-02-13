#include <stdio.h>
int main() {
    int category;
    scanf("%d",&category);
    switch(category){
        case 1:
        if(category>0 && category<=1){
            printf("under warrenty");
            break;
        }
        case 2:
        if(category<=2){
            printf("limited warrenty");
            break;
        }
        default:
        if(category>2){
            printf("out of warrenty");
        }
    }
    return 0;
}
