#include <stdio.h>
int main() {
    int marks;

    scanf("%d",&marks);

    if (marks >= 85 && marks <= 100) {
        printf("Distinction");
    } else if (marks < 85 && marks >= 40) {
        printf("Pass");
    } else {
        printf("Fail");
    }
    
    return 0;
}
