#include <stdio.h>
int main() {
    int walletBalance, N;
    scanf("%d", &walletBalance);
    scanf("%d", &N);
    int purchases[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &purchases[i]);
    }
    int i = 0;
    int success = 0;
    while(i < N) {
        if(walletBalance >= purchases[i]) {
            walletBalance = walletBalance - purchases[i];
            success++;
        } else {
            break;
        }
        i++;
    }
    printf("Successful Purchases: %d\n", success);
    printf("Final Balance: %d", walletBalance);
    return 0;
}
