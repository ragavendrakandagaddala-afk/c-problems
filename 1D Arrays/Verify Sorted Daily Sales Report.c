#include<stdio.h>
int main(){
    int n,i;
    int current,previous;
    int isStored = 1;

    if(scanf("%d",&n)!= 1)
    return 0;

    if(n <= 1){
        if(n == 1)
        scanf("%d",&current);
        printf("Yes\n");
        return 0;
    }
    scanf("%d",&previous);

    for(i = 1; i < n; i++){
        scanf("%d",&current);

        if(current < previous){
            isStored = 0;
        }
        previous = current;
    }
    if(isStored){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
