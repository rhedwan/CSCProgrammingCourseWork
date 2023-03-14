#include <stdio.h>
#include <math.h>

double hypotenuse(double x, double y)
{
    double z = sqrt(pow(x, 2) + pow(y, 2));
    return z;
}

int main(void)
{
    double firstSide, secondSide;
    printf("Enter the first side and second side: ");
    scanf("%lf %lf", &firstSide, &secondSide);
    printf("The Hypotenuse length is %.2lf", hypotenuse(firstSide, secondSide));
}
