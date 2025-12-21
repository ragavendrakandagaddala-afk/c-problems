#include <stdio.h>
int main() {
    //Your Code goes here!
    int a;
    scanf("%d",&a);
    if(a%3 == 0 || a%7 == 0){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}