#include <stdio.h>
int main() {
    //Your Code goes here!
    int marks;
    scanf("%d",&marks);
    if(marks >= 90){
        printf("grade:A");
    }
    else if (marks >= 75){
        printf("garde:B");
    }
    else if (marks >= 52){
        printf("grade:C");
    }
    else{
        printf("fail");
    }
    return 0;
}