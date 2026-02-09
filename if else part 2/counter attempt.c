#include <stdio.h>

int main() {
    int attempt;

    scanf("%d",&attempt);

    if (attempt <= 3 && attempt > 0) {
        printf("Login Allowed");
    } else {
        printf("Account Locked");
    }

    return 0;
}
