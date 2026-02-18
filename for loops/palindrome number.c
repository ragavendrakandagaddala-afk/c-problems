#include <stdio.h>

int main() {
    int n,original,rev = 0, rem;

    scanf("%d",&n);

    original = n;

    for (; n != 0; n = n / 10) {
        rem = n % 10;
        rev = rev * 10 + rem;
    }

    if (original == rev) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
