#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z'){
        printf("the character is uppercase",ch);
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("the chracter is lowercase",ch);
    }
    else {
        printf("the character is not an alphabet");
    }
    
    return 0;
}