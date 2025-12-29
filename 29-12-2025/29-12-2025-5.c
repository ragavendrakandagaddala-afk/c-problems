#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num%11 == 0){
        printf("%d is yes",num);
    }
    else{
        printf("%d is no",num);
    }
    
    return 0;
}