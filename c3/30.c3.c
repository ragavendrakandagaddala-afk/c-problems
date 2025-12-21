#include <stdio.h>
int main() {
    //Your Code goes here!
   int salary,finalsalary;
   scanf("%d",&salary);
   if(salary>=50000){
    finalsalary=salary-(salary*0.10);
   }
   else{
    printf("no tax");
   }
   printf("%d",finalsalary);
    return 0;
}