#include <stdio.h>
int main() {
    int N;
    int status[100];
    int i = 0;
    int currentStreak = 0;
    int maxStreak = 0;
    scanf("%d", &N);
    for(int j = 0; j < N; j++) {
        scanf("%d", &status[j]);
    }
    while(i < N) {
        if(status[i] == 0) {
            currentStreak++;
            if(currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
        } 
        else {
            currentStreak = 0;
        }
        i++;
    }
    printf("Longest Default Streak: %d\n", maxStreak);
    return 0;
}
