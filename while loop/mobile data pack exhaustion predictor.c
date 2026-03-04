#include <stdio.h>
int main() {
    int data;
    scanf("%d",&data);
    int n;
    scanf("%d",&n);
    int i=0;
    int usage;
    int exhaustedDay=-1;
    int overused=0;
    while(i<n){
        scanf("%d",&usage);
        data=data-usage;
        if(data<=0) {
            exhaustedDay=i + 1;
            if(data<0) {
                overused=-data;
            } else {
                overused=0;
            }
            break;
        }
        i++;
    }
    if(exhaustedDay==-1) {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0");
    } else {
        printf("Exhausted Day: %d\n", exhaustedDay);
        printf("Overused Data: %d", overused);
    }

    return 0;
}
