#include <stdio.h>
int main() {
    int N;
    int hours[100];
    int i = 0;
    int inactiveWeeks = 0;
    scanf("%d", &N);
    for(int j = 0; j < N; j++){
        scanf("%d", &hours[j]);
    }
    while(i < N){
        if(hours[i] == 0){
            inactiveWeeks++;
        }
        i++;
    }
    printf("Inactive Weeks: %d\n", inactiveWeeks);
    if(inactiveWeeks >= 3){
        printf("Risk Status: High\n");
    }
    else{
        printf("Risk Status: Low\n");
    }
    return 0;
}
