#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num%5 == 0){
        printf("%d is divisible",num);
    }
    else{
        printf("%d is not divisible",num);
    }
    
    return 0;
}