#include <stdio.h>
int main() {
    //Your Code goes here!
    int age;
    scanf("%d",&age);
    if(age>=18){
        printf("eligible for vote");
    }
    else{
        printf("not eligible for vote");
    }
    return 0;
}