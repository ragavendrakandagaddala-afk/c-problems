#include <stdio.h>
int main() {
    //Your Code goes here!
    int a;
    scanf("%d",&a);
    if (a>0){
        printf("positive");
    }
    else if(a<0){
        printf("negative");
    }
    else{
        printf("neiter positive nor negative");
    }
    return 0;
}