#include <stdio.h>

int main()
{
    int sum = 0, sum1 = 0, count = 100;
    /* for (int i = 0; i <= count; i++)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0; */

    for (int i = 0; i <= count; i += 2)
    {
        sum += i;
    }
    printf("%d", sum);

    for (int i = 1; i <= count; i += 2)
    {
        sum1 += i;
    }
    printf("%d", sum1);
    return 0;
}