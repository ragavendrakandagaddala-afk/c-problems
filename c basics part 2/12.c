#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int i = 1;
    int amount;
    int highCount = 0;
    int consecutive = 0;
    int fraudAttempt = -1;
    while(i <= N){
        scanf("%d",&amount);
        if(amount >= 50000){
            highCount++;
            consecutive++;
            if(consecutive == 3 && fraudAttempt == -1){
                fraudAttempt = i;
            }
        }
        else{
            consecutive = 0;
        }
        i++;
    }
    if(fraudAttempt == -1){
        printf("Fraud Triggered At Attempt: Not Triggered\n");
    }
    else{
        printf("Fraud Triggered At Attempt: %d\n", fraudAttempt);
    }
    printf("High-Value Transactions: %d", highCount);
    return 0;
}
