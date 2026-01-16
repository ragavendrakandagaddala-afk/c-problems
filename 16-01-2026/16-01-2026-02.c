#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char username[50];
    int i, valid = 1;
    int length;
    printf("Enter username: ");
    scanf("%s", username);
    length = strlen(username);
    if (length < 6 || length > 12) {
        valid = 0;
    }
    if (isdigit(username[0])) {
        valid = 0;
    }
    for (i = 0; i < length; i++) {
        if (!(islower(username[i]) || isdigit(username[i]))) {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Username is VALID\n");
    else
        printf("Username is INVALID\n");

    return 0;
}
