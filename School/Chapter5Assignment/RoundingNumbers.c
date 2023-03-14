#include <stdio.h>
#include <math.h>

int main(void)
{
    double userNumber, rounded;
    printf("Enter the number you want to round (enter 0 to end): ");
    scanf("%lf", &userNumber);

    while (userNumber != 0)
    {
        rounded = ceil(userNumber + .5);
        printf("Original Number: %.2lf, Rounded Number: %.2lf\n", userNumber, rounded);

        printf("Enter the number you want to round (enter 0 to end): ");
        scanf("%lf", &userNumber);
    }
}
