#include<stdio.h>
int main(){
    int n,i,j,flag;
    int arr[100];

    scanf("%d",&n);

    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < n; i++){
        flag = 0;

        for(j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            printf("%d",arr[i]);
        }
    }
    return 0;
}
