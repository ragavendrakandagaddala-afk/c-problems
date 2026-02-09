#include <stdio.h>

int main() {
    int role;

    scanf("%d",&role) 
    
    if (role == 1) {
        printf("Admin");
    } else if ( role == 2) {
        printf("User");
    } else if (role == 3) {
        printf("Guest");
    } 


    return 0;
}
