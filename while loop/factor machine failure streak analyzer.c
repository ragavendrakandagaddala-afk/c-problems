#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int status[n];
    int i = 0;
    while(i < n) {
        scanf("%d", &status[i]);
        i++;
    }
    int currentStreak = 0;
    int maxStreak = 0;
    i = 0;
    while(i < n) {
        if(status[i] == 0) {
            currentStreak++;
            if(currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
        } else {
            currentStreak = 0;
        }
        i++;
    }
    printf("Longest Failure Streak: %d", maxStreak);
    return 0;
}
