#include <stdio.h>
int main(){
    int total;
    scanf("%d",&total);
    int n;
    scanf("%d",&n);
    int withdraw;
    int i=0;
    int sum=0;
    int count=0;
    int remaining;
    while(i<n){
        scanf("%d",&withdraw);
        sum+=withdraw;
        remaining=total-sum;
        if(remaining<0){
            remaining=-remaining;
        }
        else{
            remaining=remaining;
        }
        if(total<sum){
            count++;
        }
         else{
            count++;
        }
        i++;
    }
    printf("successful Withdrawls : %d\n",count);
    printf("Remaining cash : %d",remaining);
    return 0;
}
