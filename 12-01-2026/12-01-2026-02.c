 #include <stdio.h>

int main() {
    int base, exponent, i;
    long long power = 1;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    for (i = 1; i <= exponent; i++) {
        power = power * base;
    }

    printf("%d raised to the power %d is %lld", base, exponent, power);

    return 0;
}