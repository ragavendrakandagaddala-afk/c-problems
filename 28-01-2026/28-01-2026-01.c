#include <stdio.h>

float calculateBill(int units)
{
    float bill = 0;

    if (units <= 50)
        bill = units * 2.5;
    else if (units <= 100)
        bill = 50 * 2.5 + (units - 50) * 3.0;
    else if (units <= 200)
        bill = 50 * 2.5 + 50 * 3.0 + (units - 100) * 4.0;
    else
        bill = 50 * 2.5 + 50 * 3.0 + 100 * 4.0 + (units - 200) * 5.0;

    return bill;
}

int main()
{
    int units;
    scanf("%d", &units);

    printf("%.2f", calculateBill(units));
    return 0;
}