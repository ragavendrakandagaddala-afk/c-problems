#include <stdio.h>
int main() {
    //Your Code goes here!
    int attendence;
    scanf("%d",&attendence);
    if(attendence>75){
        printf("Allowed");
    }
    else{
        printf("Not Allowed");
    }
    return 0;
}