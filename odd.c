#include <stdio.h>
int main() {
    int al,n;
    printf("enter the maximum number till where you want the odd numbers ");
    scanf("%d",&n);
    for(al=1;al<=n;al++){
    if(al%2!=0){
        printf(" %d ",al);
    }
    }
    return 0;
}
