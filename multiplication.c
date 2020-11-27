#include <stdio.h>
int main() {
    int i,n,c;
    printf("enter the multiplication of which number you want : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
     c=n*i;
        printf(" %d*%d=%d \n ",n,i,c); }
    return 0;
}
