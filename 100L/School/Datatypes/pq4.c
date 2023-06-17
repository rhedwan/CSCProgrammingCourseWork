#include <stdio.h>

int main(void)
{
    int b[] = {1, 3, 4, 5};      // Valid: Compiler will automatically determine the size of the array based on the number of elements.
    char input[7];               // Valid: Declaring a character array with a specific size of 7.
    char V[3] = {'a', 'b', 'c'}; // Valid: Declaring a character array of size 3 and initializing its elements.
    int c[4];

    int x =
            10,
        y = 20, i;
    for (i = 1; i < 10; i++)
    {
        if (x != y)
        {
            printf("x = %d y = %d \n", x, y);
            y--;
        }
    }
    return 0;
}