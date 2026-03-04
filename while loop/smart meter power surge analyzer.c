#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i=0;
    int max=0;
    int usage;
    int count=0;
    while(i<n){
        scanf("%d",&usage);
        if(max<usage){
            max=usage;
        }
        if(usage>5){
            count++;
        }
        i++;
    }
    printf("Max Usage : %d\n",max);
    printf("Surge Hours : %d",count);
    return 0;
}
