#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number, counter;
    bool isFound = true;
    printf("Enter the number (-1 to end): ");
    scanf("%d", &number);
    counter = 2;
    while (counter <= number / 2)
    {

        if (number % counter == 0)
        {
            printf("%d , %d \n", number, counter);
            isFound = false;
            break;
        }
        counter++;
    }
    if (isFound)
    {
        printf("%d is a prime number\n", number);
    }
    else
    {
        printf("%d is not a prime number\n", number);
    }
}