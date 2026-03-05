#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int i = 1;
    int vibration;
    int unsafeCount = 0;
    int consecutive = 0;
    int breakdown = -1;
    while(i <= N){
        scanf("%d", &vibration);
        if(vibration > 70){
            unsafeCount++;
            consecutive++;
            if(consecutive == 3 && breakdown == -1){
                breakdown = i;
            }
        }
        else{
            consecutive = 0;
        }
        i++;
    }
    if(breakdown == -1){
        printf("Breakdown At Reading: Not Occurred\n");
    }
    else{
        printf("Breakdown At Reading: %d\n", breakdown);
    }
    printf("Unsafe Readings: %d", unsafeCount);
    return 0;
}
