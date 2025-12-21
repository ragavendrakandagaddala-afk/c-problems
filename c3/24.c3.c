#include <stdio.h>
int main() {
    //Your Code goes here!
    int a;
    int b;
    scanf("%d",&a);
    if(a>=5000){
        b=a-(a*0.10);
    }
    else if(a<5000){
        b=a-(a*0.5);
    }
    else{
        printf("invalid input");
    }
    printf("%d",b);
    return 0;
}