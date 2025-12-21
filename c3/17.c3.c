#include <stdio.h>
int main() {
    int a,b,c,sum;
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180){
        printf("valid",sum);
    }
    else{
        printf("Invalid",sum);
    }

    return 0;
}