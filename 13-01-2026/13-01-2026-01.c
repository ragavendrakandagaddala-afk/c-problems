#include <stdio.h>

int main()
{
    long binary;
    int decimal = 0, base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    while (binary > 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * base;
        base = base * 2;
        binary = binary / 10;
    }

    printf("%d", decimal);

    return 0;
}