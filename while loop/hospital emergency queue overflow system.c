#include <stdio.h>
int main(){
    int maxCapacity, N;
    int patients;
    int treated = 0, rejected = 0;
    int i = 0;
    scanf("%d", &maxCapacity);
    scanf("%d", &N);
    while(i < N){
        scanf("%d", &patients);
        if(treated + patients <= maxCapacity){
            treated = treated + patients;
        }
        else{
            rejected = rejected + (treated + patients - maxCapacity);
            treated = maxCapacity;
        }
        i++;
    }
    printf("Treated Patients: %d\n", treated);
    printf("Rejected Patients: %d", rejected);
    return 0;
}
