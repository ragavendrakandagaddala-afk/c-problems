#include <stdio.h>

int main() {
    int days;

    scanf("%d",&days);

    if (days <= 7 && days > 0) {
        printf("No Fine");
    } else {
        printf("Fine Applied");
    }


    return 0;
}
