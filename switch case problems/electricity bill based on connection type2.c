#include <stdio.h>

int main()
{
    int choice;
    int units;
    int bill = 0;
    int subsidy = 0;

    scanf("%d", &choice);
    scanf("%d", &units);

    switch(choice)
    {
        case 1:
            if(units <= 100)
            {
                bill = units * 3;
            }
            else
            {
                bill = (100 * 3) + ((units - 100) * 5);
                subsidy = 80;
            }
            break;

        default:
            printf("Invalid choice");
            return 0;
    }

    bill = bill - subsidy;

    printf("Bill ₹%d", bill);

    return 0;
}
