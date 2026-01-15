#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200];
    char word[50], longest[50];
    int i = 0, j = 0;

    longest[0] = '\0';

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    
    sentence[strcspn(sentence, "\n")] = '\0';

    while (1)
    {
        if (sentence[i] == ' ' || sentence[i] == '\0')
        {
            word[j] = '\0';

            if (strlen(word) > strlen(longest))
            {
                strcpy(longest, word);
            }

            j = 0;

            if (sentence[i] == '\0')
                break;
        }
        else
        {
            word[j++] = sentence[i];
        }
        i++;
    }

    printf("Longest word: %s\n", longest);

    return 0;
}