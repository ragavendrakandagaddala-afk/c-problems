#include <stdio.h>
int main() {
    int capacity, N;
    int changes[100];
    int i = 0;
    int occupied = 0;
    int criticalCount = 0;
    int threshold;
    scanf("%d", &capacity);
    scanf("%d", &N);
    for(int j = 0; j < N; j++) {
        scanf("%d", &changes[j]);
    }
    threshold = capacity * 0.9;
    while(i < N) {
        occupied += changes[i];
        if(occupied > threshold) {
            criticalCount++;
        }
        i++;
    }
    printf("Final Occupied Beds: %d\n", occupied);
    printf("Critical Hours: %d\n", criticalCount);
    return 0;
}
