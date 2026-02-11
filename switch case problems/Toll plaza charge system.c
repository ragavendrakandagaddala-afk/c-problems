#include <stdio.h>

int main() {
    int vehicleType, trips;
    int totalAmount = 0;
    scanf("%d", &vehicleType);
    scanf("%d", &trips);
    switch(vehicleType) {
        case 1: 
            if(trips == 1) {
                totalAmount = 100;
            }
            else if(trips >= 2) {
                totalAmount = 800;   
            }
            printf("Total Toll Amount: ₹%d\n", totalAmount);
            break;
        case 2:
            totalAmount = trips * 240;
            printf("Total Toll Amount: ₹%d\n", totalAmount);
            break;
        default:
            printf("Invalid Vehicle Type\n");
    }
    return 0;
}
