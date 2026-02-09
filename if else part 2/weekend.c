#include <stdio.h>

int main() {
    int day;

    scanf("%d",&day);

    if (day <= 5 && day >= 1) {
        printf("Weekday");
    } else if (day <= 7 && day >= 6) {
        printf("Weekend");
    } else {
        printf("Invalid day");
    }

    return 0;
}
