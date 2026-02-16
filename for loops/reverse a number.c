#include <stdio.h>

int main() {
    int i,n,rem;
    int rev = 0;

    scanf("%d", &n);

    for (i = 1; n != 0; n = n / 10) {
        rem = n % 10;
        rev = rev * 10 + rem;
    }

    printf("%d",rev);

    return 0;
}
