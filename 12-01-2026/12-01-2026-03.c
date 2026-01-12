#include <stdio.h>

int main() {
    int N, i, j, isPrime;
    long long sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for (i = 2; i <= N; i++) {
        isPrime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            sum = sum + i;
        }
    }
    printf("Sum of all prime numbers up to %d is %lld", N, sum);
    return 0;
}