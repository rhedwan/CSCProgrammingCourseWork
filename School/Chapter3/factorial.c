#include <stdio.h>

int main()
{
    unsigned int number, counter, factorial;
    printf("Enter the number: ");
    scanf("%d", &number);
    counter = 1;
    factorial = 1;
    while (counter <= number)
    {
        factorial = factorial * counter;
        counter++;
    }

    printf("%d", factorial);
    return 0;
}
