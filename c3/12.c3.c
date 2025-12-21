#include <stdio.h>
int main() {
    //Your Code goes here!
    int salary;
    scanf("%d",&salary);
    if(salary>=20000){
        printf("the final salary %d",salary+=2000);
    }
    else{
        printf("the final salary %d",salary+=1000);
    }
    return 0;
}