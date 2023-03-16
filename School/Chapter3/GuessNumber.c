#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    int number, guess;
    bool notFound = true;
    guess = (rand() % 100) + 1;
    while (notFound)
    {
        printf("Enter a number between 1 and 100: ");
        scanf("%d", &number);
        if (number > guess)
        {
            printf("Too high, Try again!\n");
            continue;
        }
        else if (number < guess)
        {
            printf("Too Low, Try again!\n");
            continue;
        }
        else if (number == guess)
        {
            int choice;
            printf("Excellent, You guessed my number\n");
            printf("Would you like to play again? ");
            printf("Please type (1= yes, 2=no): ");
            scanf("%d", &choice);
            if (choice == 1)
            {
                guess = (rand() % 100) + 1;
                continue;
            }
            else if (choice == 2)
            {
                break;
            }
        }
        return 0;
    }
}