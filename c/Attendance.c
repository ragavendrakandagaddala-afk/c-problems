#include <stdio.h>
int main() {
    int temp;

    scanf("%d",&temp);

    if (temp <= 18) {
        printf("Cooling Mode");
    } else if (temp > 18 && temp <= 25) {
        printf("Normal Mode");
    } else {
        printf("Heating Mode");
    }

    return 0;
}
