#include <stdio.h>
int main() {
    int type;
    int weight;
    int charge=0;
    scanf("%d%d",&type,&weight);
    switch(type){
        case 1:
            charge = weight*300;
           printf("%d",charge);
        break;
        case 2:
         if(weight<=1 && weight <=3){
            charge =0;
            printf("no charge");
         }else if(weight>3){
            charge=(weight-3)*300;
            printf("%d",charge);
         }
         break;
         default:
         printf("Invalid type");
    }
    
    return 0;
}
