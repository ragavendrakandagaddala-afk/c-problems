#include<stdio.h>
int main(){
    int n,i;

    printf("Enter number of stops: ");
    scanf("%d",&n);

    int stops[n];

    printf("Enter stop numbers:\n");
    for(i = 0;i < n; i++){
        scanf("%d",&stops[i]);
    }
    int start = 0;
    int end = n-1;
    int temp;

     while(start < end){
        temp = stops[start];
        stops[start] = stops[end];
        stops[end] = temp;

        start++;
        end--;
     }
     printf("Reserved route:\n");
     for(i = 0; i < n; i++){
        printf("%d ",stops[i]);
     }
     return 0;
}
