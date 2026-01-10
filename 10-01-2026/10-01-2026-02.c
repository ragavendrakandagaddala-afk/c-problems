#include <stdio.h>

int main()
{
    int num, originalNum, digit, sum = 0, i, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;
    while (num > 0)
    {
        digit = num % 10;
        fact = 1;

        for (i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }
    if (sum == originalNum)
        printf("%d is a Strong number", originalNum);
    else
        printf("%d is not a Strong number", originalNum);

    return 0;
}