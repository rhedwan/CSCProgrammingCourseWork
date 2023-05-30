#include <stdio.h>

int main()
{
    int number[] = {23, 45, 67, 34, 32, 90};
    for (size_t i = 0; i < 6; ++i)
    {
        // printf("%d", number[i]++);
        printf("%d", ++number[i]);
        printf("%d\n", number[i]);
    }
}