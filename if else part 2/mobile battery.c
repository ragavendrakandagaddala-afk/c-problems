#include <stdio.h>
int main() {
    int mobile_battery;

    scanf("%d",&mobile_battery);

    if (mobile_battery >= 20) {
        printf("Battery is OK");
    } else {
        printf("Low battery");
    }

    return 0;
}
