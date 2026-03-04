#include <stdio.h>
int main() {
    int maxWeight, N;
    int weight[100];
    int i = 0;
    int totalWeight = 0;
    int passengersAllowed = 0;
    int overload = 0;
    scanf("%d", &maxWeight);
    scanf("%d", &N);
    for(int j = 0; j < N; j++) {
        scanf("%d", &weight[j]);
    }
    while(i < N) {
        if(totalWeight + weight[i] <= maxWeight) {
            totalWeight += weight[i];
            passengersAllowed++;
        } else {
            overload = 1;
            break;
        }
        i++;
    }
    printf("Passengers Allowed: %d\n", passengersAllowed);
    if(overload == 1){
        printf("Overload: Yes\n");
    }
    else{
        printf("Overload: No\n");
    }
    return 0;
}
