#include <stdio.h>
int main() {
    int type;
    int time;
    int charge=0;
    scanf("%d%d",&type,&time);
    switch(type){
        case 1:
            charge=time*10;
            printf("%d",charge);
        break;
        case 2:
         charge=time*20;
         printf("%d",charge);
         
            break; 
            default:
            charge=time*20;
                 printf("%d",charge);
    
    } 
    
    return 0;
}
