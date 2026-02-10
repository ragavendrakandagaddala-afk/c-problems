#include <stdio.h>

int main() {
    int marks;
    float attendance;
    scanf("%f %d", &attendance, &marks);
    if (attendance < 75) {
        printf("Fail");
    } else {
        if (marks >= 75) {
            printf("Distinction");
        } else if (marks >= 50) {
            printf("Pass");
        } else {
            printf("Fail");
        }
    }

    return 0;
}
