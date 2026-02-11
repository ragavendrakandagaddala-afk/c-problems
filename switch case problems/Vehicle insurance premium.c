#include <stdio.h>
int main() {
    int type;
    int age;
    int premium =0;
    scanf("%d%d",&type,&age);
    switch(type){
        case 1:
        if(age<=5){
            premium=1500;
            printf("%d",premium);
        }else{
            premium=2000;
            printf("%d",premium);
        }
        break;
        case 2:
        if(age<=5){
            premium=4000;
            printf("%d",premium);
        }else{
            premium=6000;
            printf("%d",premium);
        }
        break;
        default:
        printf("Invalid type");
    }
    
    return 0;
}
