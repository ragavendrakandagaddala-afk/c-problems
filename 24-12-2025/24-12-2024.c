#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    // Loop to generate the series
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // First two terms (0 and 1)
        } else {
            next = first + second; // Calculate next term
            first = second;        // Update first
            second = next;         // Update second
        }
        printf("%d ", next); // Print the current term
    }

    printf("\n"); // Newline at the end
    return 0;
}