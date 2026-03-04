#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=0;
    int hours;
    int count=0;
    int sum=0;
    while(i<n){
        scanf("%d",&hours);
        sum+=hours;
        if(hours>4){
            count++;
        }
        i++;
    }
    printf("Total Overtime : %d\n",sum);
    printf("Burn Out Days : %d",count);
    return 0;
}
