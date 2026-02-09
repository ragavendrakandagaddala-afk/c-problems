#include <stdio.h>

int main() {
    int pass;

    scanf("%d",&pass);

    if (pass >= 8) {
        printf("Strong password");
    } else {
        printf("Week password");
    }

    return 0;
}
