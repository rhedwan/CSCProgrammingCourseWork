#include <stdio.h>
#include <math.h>

int main()
{
    int number = 4096;
    printf("The square root of %d is %f\n", number, sqrt(number));
    printf("The cube root of %d is %f\n", number, cbrt(number));
    printf("Power of %d is %f", number, pow(number, 2));
}