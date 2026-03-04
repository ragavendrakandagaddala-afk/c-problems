#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int hours;
    int i=0;
    int sum=0;
    int count=0;
    while(i<n){
        scanf("%d",&hours);
        if(hours>2){
            count++;
        }
        sum+=hours;
        i++;
    }
    printf("Total Delay : %d\n",sum);
    printf("Delayed Days : %d",count);
    return 0;
}
