#include <stdio.h>
int main(){
    int total;
    scanf("%d",&total);
    int n;
    scanf("%d",&n);
    int i=0;
    int count=0;
    int remaining_data;
    int data;
    int sum=0;
    while(i<n){
        scanf("%d",&data);
        if(data>=2){
            count++;
        }
        remaining_data=sum-data;
        i++;
    }    
    printf("Days Used : %d\n",count);
    if(remaining_data>0){
         printf("Remaining Data : %d",remaining_data);
    }
    else{
        printf("Remaining Data : 0GB");
    }
    return 0;
}
