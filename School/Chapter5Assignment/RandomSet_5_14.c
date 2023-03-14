#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int firstNumberPick = (rand() % 10) * 3 + 3;
    printf("%d\n", firstNumberPick);

    int secondNumberPick = (rand() % 9) * 2 + 3;
    printf("%d\n", secondNumberPick);

    int thirdNumberPick = (rand() % 7) * 5 + 3;
    printf("%d\n", thirdNumberPick);
}