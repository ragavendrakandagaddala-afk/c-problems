#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Second largest element not possible.\n");
        return 0;
    }

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = second = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    printf("Second largest element = %d\n", second);

    return 0;
}