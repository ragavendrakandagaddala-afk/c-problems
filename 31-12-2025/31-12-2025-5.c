#include <stdio.h>
int main() {
    int num,temp,rev=0,remainder;
    scanf("%d",&num);
    temp=num;
    while(num!=0){
    remainder=num%10;
    rev=rev*10+remainder;
    num=num/10; 
    }
    if(temp==rev)
    printf("The number is palidrome");
    else
    printf("The number is not a palindrome");
    
    return 0;
}