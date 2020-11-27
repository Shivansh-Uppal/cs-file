#include <stdio.h>
int main() {
    int i,n,j;
    printf("enter the number whose first and last digit you want  : ");
    scanf("%d",&n);
    i = n % 10;
    printf("Last digit = %d\n", i);
    j = n;
    while(j >= 10)
    {
        j/= 10;
    }

    printf("First digit = %d",j);
    return 0;
}
