#include <stdio.h>

int main()
{
    int count = 1, number = 12, end = 79;
    while (count < end)
    {
        printf("%d * %d = %d \n", count, number, count * number);
        count = count + 1;
    }
    return 0;
}