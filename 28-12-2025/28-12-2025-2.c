#include <stdio.h>

int main() {
    double num;
    
    printf("Enter a number: ");
    scanf("%lf", &num);
    
    if (num > 0.0) {
        printf("The number %.2f is positive.",num);
    }
    else if (num < 0.0) {
        printf("The number %.2f is negative.",num);
    }
    else {
        printf("The number %.2f is zero.",num);
    }
    
    return 0;
}