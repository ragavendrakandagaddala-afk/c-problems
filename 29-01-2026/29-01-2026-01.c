#include <stdio.h>

char calculateGrade(int marks) {
    if (marks >= 90)
        return 'A';
    else if (marks >= 60)
        return 'C';
    else
        return 'D';
}

int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    printf("Grade: %c", calculateGrade(marks));
    return 0;
}