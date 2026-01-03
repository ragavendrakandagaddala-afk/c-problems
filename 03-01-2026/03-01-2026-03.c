#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) {
            count++;
        }
    }

    printf("Number of odd elements in the array = %d", count);

    return 0;
}