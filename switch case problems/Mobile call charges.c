#include <stdio.h>
int main() {
    int callType;
    scanf("%d",&callType);
    int min;
    scanf("%d",&min);
    switch(callType){
        case 1:
        if(min>=1){
            printf("%d",min*1);
        }else{
            printf("invalid input");
        }break;
        case 2:
          if(min>=1){
            printf("%d",min*3);
          }else{
            printf("invalid input");
          }
            break;
          case 3:
          if(min>=1){
            printf("%d",min*10);
          }else{
             printf("invalid input");
          }break;
          default:
          printf("invalid type");
    
    }

    
    return 0;
}
