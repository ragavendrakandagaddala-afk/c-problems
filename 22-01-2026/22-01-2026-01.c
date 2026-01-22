#include <stdio.h>
#include <string.h>

int main() {
    char logMessage[200];

    printf("Enter the log message: ");
    fgets(logMessage, sizeof(logMessage), stdin);

    if (strstr(logMessage, "found") != NULL) {
        printf("The word 'found' exists in the log message.\n");
    } else {
        printf("The word 'found' does not exist in the log message.\n");
    }

    return 0;
}