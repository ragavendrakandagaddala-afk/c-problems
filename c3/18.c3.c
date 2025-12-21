#include <stdio.h>
int main() {
    //Your Code goes here!
    int cost;
    int selling;
    scanf("%d%d",&cost,&selling);
    if(selling>cost){
        printf("profit");
    }else{
        printf("loss");
    }
    return 0;
}