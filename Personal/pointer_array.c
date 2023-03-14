#include <stdio.h>

void main()
{
    int numbers[5] = {23, 45, 33, 32, 90};
    for (int i = 0; i < 5; i++)
    {
        printf("Array Address %d = %p\n", numbers[i], &numbers[i]);
        printf("Array Address %d = %p\n", *(numbers + i), numbers + i);
    }

    // printf("Array Address: %p", numbers);
    // printf("Array Address: %p", numbers + 1);

    // changing a number in a array

    *numbers = 34;
    *(numbers + 4) = 100;
    for (int i = 0; i < 5; i++)
    {
        printf("Array Address %d = %p\n", numbers[i], &numbers[i]);
    }
}