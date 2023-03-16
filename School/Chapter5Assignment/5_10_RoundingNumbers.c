#include <stdio.h>
#include <math.h>

int main(void)
{
    double userNumber, rounded;

    // Prompt user for input
    printf("Enter the number you want to round (enter 0 to end): ");
    scanf("%lf", &userNumber);

    // Continue prompting user until they enter 0

    while (userNumber != 0)
    {
        // Round the user's number using ceil() function
        rounded = ceil(userNumber + .5);

        // Display original and rounded numbers
        printf("Original Number: %.2lf, Rounded Number: %.2lf\n", userNumber, rounded);

        // Prompt user for input again
        printf("Enter the number you want to round (enter 0 to end): ");
        scanf("%lf", &userNumber);
    }
}
