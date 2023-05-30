#include <stdio.h>

int main()
{
    int start = 0, number = 12, end = 9;
    /*
    do
    {
        {
            printf("%d * %d = %d \n", start, number, start * number);
            start = start + 1;
        }
    } while (start < end);

    return 0; */
    do
    {
        // printf("%d \n", end);
        printf("%d * %d = %d \n", end, number, end * number);
        end = end - 1;
    } while (end > start);
}