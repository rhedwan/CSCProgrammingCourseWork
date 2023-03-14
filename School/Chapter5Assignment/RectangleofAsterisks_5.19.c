#include <stdio.h>

void asterisksPrinter(unsigned int x);

int main(void)
{
    unsigned int side1, side2;
    printf("Enter the length and breadth: ");
    scanf("%u %u", &side1, &side2);

    for (unsigned int i = 0; i < side1; i++)
    {
        asterisksPrinter(side2);
    }

    return 0;
}

void asterisksPrinter(unsigned int x)
{
    for (unsigned int i = 0; i < x; i++)
    {
        printf("*");
    }
    printf("\n");
}