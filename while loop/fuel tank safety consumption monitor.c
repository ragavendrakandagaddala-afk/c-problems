#include <stdio.h>
int main() {
    int fuel, N;
    int consumption[100];
    int i = 0;
    int completedTrips = 0;
    scanf("%d", &fuel);
    scanf("%d", &N);
    for(int j = 0; j < N; j++) {
        scanf("%d", &consumption[j]);
    }
    while(i < N) {
        if(fuel >= consumption[i]) {
            fuel -= consumption[i];
            completedTrips++;
        } 
        else {
            break;
        }
        i++;
    }
    printf("Completed Trips: %d\n", completedTrips);
    printf("Remaining Fuel: %d\n", fuel);
    return 0;
}
