#include <stdio.h>

void asterisksPrinter(unsigned int x, char character);

int main(void)
{
    unsigned int side1, side2;
    char character;
    printf("Enter the length and breadth: ");
    scanf("%u %u %c", &side1, &side2, &character);

    for (unsigned int i = 0; i < side1; i++)
    {
        asterisksPrinter(side2, character);
    }

    return 0;
}

void asterisksPrinter(unsigned int x, char c)
{
    for (unsigned int i = 0; i < x; i++)
    {
        printf("%c", c);
    }
    printf("\n");
}