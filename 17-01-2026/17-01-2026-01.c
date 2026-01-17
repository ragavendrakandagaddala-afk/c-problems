#include <stdio.h>
#include <string.h>

int main()
{
    char email[100];
    char domain[] = "@company.com";

    printf("Enter email address: ");
    scanf("%s", email);

    int emailLen = strlen(email);
    int domainLen = strlen(domain);
    if (emailLen >= domainLen) {
        if (strcmp(email + emailLen - domainLen, domain) == 0)
        {
            printf("Valid official email address\n");
        }
        else
        {
            printf("Invalid email: Not an official domain\n");
        }
    }
    else
    {
        printf("Invalid email address\n");
    }

    return 0;
}
