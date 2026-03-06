#include <stdio.h>
int main() {
    int N;
    int balance;
    int transaction;
    int i = 0;
    int LowBalanceDays = 0;
    scanf("%d",&N);
    scanf("%d",&balance);
    while(i<N){
        scanf("%d",&transaction);
        balance = balance + transaction;
        if(balance<2000){
            LowBalanceDays++;
        }
        i++;
    }
    printf("Final Balance : %d\n",balance);
    printf("LowBalanceDays : %d\n",LowBalanceDays);
    
    return 0;
}
