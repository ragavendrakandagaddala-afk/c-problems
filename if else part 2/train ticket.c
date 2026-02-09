#include <stdio.h>

int main() {
    int n;

    scanf("%d",&n);

    if (n > 0) {
        printf("Confirmed");
    } else {
        printf("Waiting List");
    }


    return 0;
}
