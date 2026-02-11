#include<stdio.h>
int main(){
    int type;
    float Usage;
    scanf("%d %f",&type,&Usage);
    switch(type){
        case 1:
        if(Usage<=1){
            printf("Normal Speed");
        }
        else{
            printf("Speed Redused");
        }break;
        case 2:
        if(Usage<=2){
        printf("Normal Speed");
        }else{
        printf("Extra charges applied");
        }break;
        default:
        printf("invalid plane type");
    }
    return 0;
}
