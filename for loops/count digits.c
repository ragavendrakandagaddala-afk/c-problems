#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int count=0;
    if(N==0){
        count=1;
    }else{
        if(N<0){
            N=-N;
        }
        for(;N>0;N=N/10){
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}
