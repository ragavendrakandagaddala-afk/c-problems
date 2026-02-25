#include <stdio.h>

int main()
{
    int i, j, n = 5;

    // Upper half
    for(i = n; i >= 1; i--)
    {
        // Left stars
        for(j = 1; j <= i; j++)
            printf("*");

        // Middle spaces
        for(j = 1; j <= 2*(n-i); j++)
            printf(" ");

        // Right stars
        for(j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    // Lower half
    for(i = 2; i <= n; i++)
    {
        // Left stars
        for(j = 1; j <= i; j++)
            printf("*");

        // Middle spaces
        for(j = 1; j <= 2*(n-i); j++)
            printf(" ");

        // Right stars
        for(j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
