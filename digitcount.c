#include <stdio.h>
int main() {
    int di=0,n;
    printf("enter the number you want to count the number of digits : ");
    scanf("%d",&n);
    while(n!=0){
        n/=10;
        di++;
    }
    printf("the number of digits is %d",di);
    return 0;
}
