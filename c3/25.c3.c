#include <stdio.h>
int main() {
    //Your Code goes here!
    int marks;
    scanf("%d",&marks);
    if(marks>=35){
        printf("pass");
    }
    else if (marks>=30){
        printf("Grace Pass");
    }
    else{
        printf("Fail");
    }
    return 0;
}