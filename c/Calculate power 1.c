#include <stdio.h>
int main() {
    int N,P;
    long long result = 1;
    scanf("%d%d",&N,&P);
    for(int i=1;i<=P;i++){
        result=result*N;
    }printf("%d rised to the power %d is %d\n",N,P,result);
    
    return 0;
}
