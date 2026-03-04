#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int orders[n];
    int i = 0;
    while(i < n) {
        scanf("%d", &orders[i]);
        i++;
    }
    int successful = 0;
    int cancelled = 0;
    i = 0;
    while(i < n) {
        if(orders[i] == 1) {
            successful++;
        } else if(orders[i] == 0) {
            cancelled++;
        }
        i++;
    }
    printf("Successful: %d\n", successful);
    printf("Cancelled: %d\n", cancelled);
    if(cancelled > successful) {
        printf("Status: Risk");
    } else {
        printf("Status: Safe");
    }
    return 0;
}
