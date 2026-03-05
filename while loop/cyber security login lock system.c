#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int i = 1;
    int login;
    int failed = 0;
    int consecutive = 0;
    int lockAttempt = -1;
    while(i <= N){
        scanf("%d",&login);
        if(login == 0){
            failed++;
            consecutive++;
            if(consecutive == 3 && lockAttempt == -1){
                lockAttempt = i;
            }
        }
        else{
            consecutive = 0;
        }
        i++;
    }
    if(lockAttempt == -1){
        printf("Lock Triggered At Attempt: Not Locked\n");
    }
    else{
        printf("Lock Triggered At Attempt: %d\n", lockAttempt);
    }
    printf("Total Failed Attempts: %d", failed);
    return 0;
}
