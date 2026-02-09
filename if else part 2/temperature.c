#include <stdio.h>

int main() {
    int temp;

    scanf("%d",&temp);

    if (temp >= 20 && temp <= 30) {
        printf("Normal");
    } else if (temp < 20) {
        printf("Cold");
    } else {
        printf("Hot");
    }

    return 0;
}
