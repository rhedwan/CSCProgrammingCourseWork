#include <stdio.h>
#include <math.h>

// Function to round a number to the nearest integer
double roundToInteger(double x)
{
    return floor(x + 0.5);
}

// Function to round a number to the tenths place
double roundToTenths(double x)
{
    return floor(x * 10 + 0.5) / 10;
}

// Function to round a number to the hundredths place
double roundToHundredths(double x)
{
    return floor(x * 100 + 0.5) / 100;
}

// Function to round a number to the thousandths place
double roundToThousandths(double x)
{
    return floor(x * 1000 + 0.5) / 1000;
}

int main()
{
    double x;

    // Read a number from the user
    printf("Enter a number: ");
    scanf("%lf", &x);

    // Round the number to the nearest integer
    printf("Rounded to the nearest integer: %.0f\n", roundToInteger(x));

    // Round the number to the tenths place
    printf("Rounded to the tenths place: %.1f\n", roundToTenths(x));

    // Round the number to the hundredths place
    printf("Rounded to the hundredths place: %.2f\n", roundToHundredths(x));

    // Round the number to the thousandths place
    printf("Rounded to the thousandths place: %.3f\n", roundToThousandths(x));

    return 0;
}
