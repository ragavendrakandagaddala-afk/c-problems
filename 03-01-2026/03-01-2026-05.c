#include <stdio.h>

int main() {
    int n, i;
    int arr[100], rev[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /* Reverse array */
    for(i = 0; i < n; i++) {
        rev[i] = arr[n - i - 1];
    }

    printf("Reversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", rev[i]);
    }

    return 0;
}