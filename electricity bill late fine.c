#include <stdio.h>
int main() {
    int day;
    scanf("%d",&day);
    int a;
    if(day<=5){
        a=1;

    }
    else if(day<=10 && day>5){
        a=2;
    }else{
        a=3;
    }
    switch(a){
        case 1:
        printf("%d",day*50);
        break;
        case 2:
        printf("%d",day*100);
        break;
        case 3:
        printf("%d",day*200);
        break;
        default:
        printf("invalid type");
    }

    
    return 0;
}
