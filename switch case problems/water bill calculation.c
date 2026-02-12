#include <stdio.h>
int main() {
    int type;
    int units;
    scanf("%d%d",&type,&units);
    switch(type){
        case 1:

        if(units<=30 && units>0){
            printf("%d",units*5);
        }else if(units>30){
            printf("%d",(units-30)*8+30*5);
        }break;
          case 2:
          if(units>0){
            printf("%d",units*10);
          }break;
          default:
          printf("Invalid");
    }

    
    return 0;
}
