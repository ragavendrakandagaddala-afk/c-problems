#include <stdio.h>
int main() {
    int value;

    scanf("%d",&value);

    if (value >= 499) {
        printf("Free Delivary");
    } else {
        printf("Delivery Charges Apply");
    }
    return 0;
}
