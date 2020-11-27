#include <stdio.h>
int fr(int a,int b){
         int c=0;
         while(a>0){
             if(a%10==b)
             c++;
             a=a/10;
         }
return c;
}
int main(){
    int A,B;
    printf("enter the number ");
    scanf("%d",&A);
    printf("enter the digit frequency want to know ");
    scanf("%d",&B);
    printf("the frequency is %d ",fr(A,B));
    return 0;


}