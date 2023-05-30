#include <stdio.h>
#include <math.h>

double hypotenuse(double x, double y)
{
    double z = sqrt(pow(x, 2) + pow(y, 2));
    return z;
}

int main(void)
{
    // Take input from the user for the lengths of the two sides
    double firstSide, secondSide;
    printf("Enter the first side and second side: ");
    scanf("%lf %lf", &firstSide, &secondSide);

    // Call the hypotenuse() function to calculate the length of the hypotenuse
    // Print out the length of the hypotenuse
    printf("The Hypotenuse length is %.2lf", hypotenuse(firstSide, secondSide));
}
