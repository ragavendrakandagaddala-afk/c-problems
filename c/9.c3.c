#include <stdio.h>
int main() {
    //Your Code goes here!
    char ch;
    scanf("%c",&ch);
    if( ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("%c is a vowel",ch);
    }
    else{
        printf("%c is a consonent",ch);
    }
    return 0;
}