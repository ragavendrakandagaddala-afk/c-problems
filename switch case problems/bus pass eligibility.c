#include <stdio.h>
int main() {
    int category;
    int distance;
    scanf("%d%d",&category,&distance);
    switch(category){
        case 1:
        if(distance<=30){
            printf("eligible");
        }else{
            printf("eligible with extra fee");
        }break;
        case 2:
        if(distance<=30){
            printf("eligible");
        }else if(distance>30){
            printf("Not eligible");
        }break;
        default:
        if(distance=30){
          printf("eligible");
        }
    }    
            
    
    return 0;
}
