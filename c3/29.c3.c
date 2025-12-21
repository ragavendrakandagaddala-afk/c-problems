#include <stdio.h>
int main() {
    //Your Code goes here!
    int a;
    scanf("%d",&a);
    if(a%4 == 0 && a%8 != 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}