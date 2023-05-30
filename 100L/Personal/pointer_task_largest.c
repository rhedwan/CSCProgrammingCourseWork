#include <stdio.h>

void main()
{
    int numbers[5] = {2003, 405, 33, 32, 90};
    int largest = *numbers;
    for (int i = 0; i < 5; i++)
    {
        if (largest <= *(numbers + i))
        {
            largest = *(numbers + i);
        }
    }

    printf("The largest value = %d", largest);
}