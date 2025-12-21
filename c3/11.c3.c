#include <stdio.h>
int main() {
    //Your Code goes here!
    int num;
    scanf("%d",&num);
    if(num >=-9 && num <=9){
        printf("single digit");
    }
    else{
        printf("not a single digit");
    }
    return 0;
}