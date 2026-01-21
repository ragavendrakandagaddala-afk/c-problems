#include <stdio.h>
#include <ctype.h>
int main() {
    char sentence[200];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    if (sentence[0] >= 'a' && sentence[0] <= 'z') {
        sentence[0] = sentence[0] - 32;
    }

    printf("Capitalized sentence: %s", sentence);

    return 0;
}