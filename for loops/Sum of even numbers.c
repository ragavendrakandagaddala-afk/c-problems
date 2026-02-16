#include <stdio.h>

int main() {
    int n,i;
    int sum = 0;

    scanf("%d",&n);

    for (i = 2; i <= n; i += 2) {
        sum = sum + i;
    }

    printf("%d ", sum);

    return 0;
}
