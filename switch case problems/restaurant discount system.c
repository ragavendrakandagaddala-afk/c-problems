#include <stdio.h>
int main() {
    int customertype;
    scanf("%d",&customertype);
    int Billamount;
    scanf("%d",&Billamount);
    switch(customertype)
    {

        case 1:
        if(Billamount>0){
        printf("₹%d",Billamount-5*Billamount/100);   
        }
        else {
        printf("Invalid Input");
        }
        break;

        case 2:
        if(Billamount>0){
        printf("₹%d",Billamount-15*Billamount/100);   
        }
        else {
        printf("Invalid Input");
        }
        break;
        default:
        printf("Invalid Input");
        break;
    }
    
    return 0;
}
