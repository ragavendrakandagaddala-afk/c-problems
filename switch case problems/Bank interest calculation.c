#include <stdio.h>

int main() {
    int accountType, years;
    float interest = 0;
    scanf("%d%d", &accountType,&years);
    switch(accountType) {
        case 1: 
            interest = 4;
            break;
        case 2:
            if(years <= 3)
                interest = 5;
            else
                interest = 7;
            break;
        default:
            printf("Invalid Account Type");
            return 0;
    }
    printf("Interest %.0f%%", interest);
    return 0;
}
