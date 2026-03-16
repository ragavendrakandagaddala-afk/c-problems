#include <stdio.h>

int main() {
    int n,i,j=0;
    scanf("%d",&n);

    int a[n], b[n];

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    int max=a[n-1];
    b[j++]=max;

    for(i=n-2;i>=0;i--){
        if(a[i]>max){
            max=a[i];
            b[j++]=max;
        }
    }

    for(i=j-1;i>=0;i--)
        printf("%d ",b[i]);

    return 0;
}
