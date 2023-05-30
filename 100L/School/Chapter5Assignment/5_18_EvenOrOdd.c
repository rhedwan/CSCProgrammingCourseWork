#include <stdio.h>

int isEven(int number)
{
    return number % 2 == 1;
}

int main(void)
{
    printf("Enter the number: ");
    int number;
    scanf("%d", &number);
    if (isEven(number))
    {

        printf("%d is Odd \n", number);
        // printf("%d", 1);
    }
    else
    {
        printf("%d is Even \n", number);
        // printf("%d", 0);
    }
}