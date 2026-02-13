#include <stdio.h>
int main() {
    int bookType,daysLater;
    int feePerDay = 0,totalFee;

    scanf("%d %d",&bookType,&daysLater);
    switch(bookType){
        case 1:
        feePerDay=2;
        break;
        case 2:
        feePerDay=5;
        break;
        default:
        printf("invalid type");
        return 0;
    }
    totalFee=feePerDay*daysLater;
    printf("LateFee₹%d",totalFee);
    return 0;
}
