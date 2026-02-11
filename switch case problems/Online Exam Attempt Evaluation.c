#include <stdio.h>
int main() {
    int attempt;
    int marks;
    scanf("%d%d",&attempt,&marks);
    switch(attempt){
        case 1:
        if(marks>=80){
            printf("Exellent");
        }else{
            printf("Not Qualified");
        }break;
        case 2:
        if(marks>=60){
            printf("good");
        }else{
            printf("Not Qualified");
        }break;
        default:
            printf("Need Improvement");
    }
    return 0;
}
