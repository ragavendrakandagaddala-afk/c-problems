#include <stdio.h>

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    printf("%d\n", max(10, 20));
    printf("%d\n", max(50, 30));
    printf("%d\n", max(-5, 3));
    printf("%d\n", max(100, 90));
    printf("%d\n", max(7, 7));
    return 0;
}