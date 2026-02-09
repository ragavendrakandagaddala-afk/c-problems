#include <stdio.h>
int main() {
    int age;

    scanf("%d",&age);

    if (age >= 12) {
        printf("Regular Ticket");
    } else {
        printf("Discount Ticket");
    }

    return 0;
}
