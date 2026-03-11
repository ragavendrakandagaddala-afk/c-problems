#include<stdio.h>
int main(){
    int N,i;
    int num,actualSum = 0;
    int expectedSum,missing;

    scanf("%d",&N);

    for(i = 0; i < N - 1; i++){
        scanf("%d",&num);
        actualSum += num;
    }
    expectedSum = N * (N + 1) / 2;

    missing = expectedSum - actualSum;

    printf("%d",missing);

    return 0;
}
