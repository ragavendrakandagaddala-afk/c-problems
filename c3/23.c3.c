#include <stdio.h>
int main() {
    //Your Code goes here!
     char ch;
     scanf("%c",&ch);
     if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        printf("Alphabet");
     }
     else if (ch>='0' && ch<= '9'){
        printf("Digits");
     }
     else {
        printf("special character");
     }
    return 0;
}