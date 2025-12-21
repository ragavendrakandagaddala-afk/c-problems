#include <stdio.h>
int main() {
    //Your Code goes here!
    int bill;
    scanf("%d",&bill);
    if(bill <= 100){
        printf("%d",bill*1);
    }
    else{
        printf("%d",bill*2);
    }
    return 0;
}