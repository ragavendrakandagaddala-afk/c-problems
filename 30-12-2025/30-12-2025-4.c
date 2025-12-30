#include <stdio.h>
int main() {
    int N,i;
    scanf("%d",&N);
     printf("the odd numbers are %d\n",N);
    for(i=1;i<=N;i+=2){
        printf("%d",i);
    }
    
    return 0;
}