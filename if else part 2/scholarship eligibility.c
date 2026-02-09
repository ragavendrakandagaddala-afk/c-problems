#include <stdio.h>
int main() {
    int marks,salary;

    scanf("%d %d",&marks,&salary);

    if ((marks >= 85 && marks <= 100) && salary < 300000) {
        printf("Eligible");
    } else {
        printf("Not Eligible");
    }

    return 0;
}
