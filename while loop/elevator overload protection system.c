#include <stdio.h>
int main(){
    int max;
    scanf("%d",&max);
    int n;
    scanf("%d",&n);
    int weight;
    int i=0;
    int sum=0;
    int count=0;
    while(i<n){
        scanf("%d",&weight);
        sum+=weight;
        if(sum<=max){
            count++;
        }
        i++;
    }
     printf("People Enterd : %d\n",count);
    if(max<sum){
            printf("Overload Status : Yes");
        }
        else{
            printf("Overload Status : No");
        }
    return 0;
}
