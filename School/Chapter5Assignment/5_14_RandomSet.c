#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));

    // Generate the first random number that is a multiple of 3 between 3 and 30 (inclusive)
    int firstNumberPick = (rand() % 10) * 3 + 3;
    printf("%d\n", firstNumberPick);

    // Generate the second random number that is a multiple of 2 between 3 and 19 (inclusive)
    int secondNumberPick = (rand() % 9) * 2 + 3;
    printf("%d\n", secondNumberPick);

    // Generate the third random number that is a multiple of 5 between 3 and 35 (inclusive)
    int thirdNumberPick = (rand() % 7) * 5 + 3;
    printf("%d\n", thirdNumberPick);
}