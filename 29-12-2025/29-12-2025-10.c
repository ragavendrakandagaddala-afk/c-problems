#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num%2 == 0 || num%3 == 0){
        printf("yes",num);
    }
    else{
        printf("no",num);
    }
    
    return 0;
}