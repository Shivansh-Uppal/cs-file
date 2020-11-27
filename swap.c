#include <stdio.h>
#include <math.h>

int main()
{
    int num, sw;
    int f, l, d;

    
    printf("Enter any number: ");
    scanf("%d", &num);


    l = num % 10; 
    d = (int) log10(num); 
     f = (int) (num / pow(10, d));

    sw  = l;
    sw *= (int) round(pow(10, d));
    sw += num % ((int)round(pow(10, d)));
    sw -= l;
    sw += f;
    printf("Number after swapping first and last digit: %d", sw);

    return 0;
}