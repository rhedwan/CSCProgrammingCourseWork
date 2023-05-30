#include <stdio.h>
#include <math.h>

int main(void)
{
    double userNumber, ceiled;
    int rounded;

    // Prompt user for input
    printf("Enter the number you want to round (enter 0 to end): ");
    scanf("%lf", &userNumber);

    // Continue prompting user until they enter 0

    while (userNumber != 0)
    {
        // Round the user's number using ceil() function
        ceiled = (userNumber + .5);
        rounded = ceil(ceiled);

        // Display original and rounded numbers
        // printf("Original Number: %.2lf, Rounded Number: %d\n", ceiled, rounded);
        printf("Original Number: %.2lf, Rounded Number: %d\n", userNumber, rounded);

        // Prompt user for input again
        printf("Enter the number you want to round (enter 0 to end): ");
        scanf("%lf", &userNumber);
    }
}
