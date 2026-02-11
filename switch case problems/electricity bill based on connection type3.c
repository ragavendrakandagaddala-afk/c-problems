#include <stdio.h>

int main()
{
    int plan, units;
    int bill = 0;

    scanf("%d%d", &plan,&units);

    switch(plan)
    {
        case 1:
            if(units <= 100)
                bill = units * 3;
            else
                bill = (100 * 3) + ((units - 100) * 5);
            break;

        case 2:
            if(units <= 100)
                bill = units * 7;
            else
                bill = (100 * 7) + ((units - 100) * 10);
            break;

        default:
            printf("Invalid Plan");
            return 0;
    }

    printf("Bill ₹%d", bill);

    return 0;
}
