#include <stdio.h>

int main()
{

    int count = 10;
    for (int i = 0; i < count; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 9; i > -1; i--)
    {
        printf("%d ", i);
    }

    return 0;
}