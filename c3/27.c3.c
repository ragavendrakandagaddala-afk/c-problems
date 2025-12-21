#include <stdio.h>
int main() {
    //Your Code goes here!
    int age;
    int salary;
    scanf("%d%d",&age,&salary);
    if(age>=25 && salary>=30000){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }

    return 0;
}