#include <stdio.h>
#include <stdlib.h>
#include <time.h> // contains prototype for function time

int main(void)
{
    // unsigned int number1 = rand();
    srand(time(NULL));

    int randomNumber1 = 1 + (rand() % 6);
    printf("%d\n", randomNumber1);

    int randomNumber2 = 100 + (rand() % 901);
    printf("%d\n", randomNumber2);

    int randomNumber3 = 0 + (rand() % 19);
    printf("%d\n", randomNumber3);

    int randomNumber4 = 1000 + (rand() % 1223);
    printf("%d\n", randomNumber4);

    int randomNumber5 = -1 + (rand() % 3);
    printf("%d\n", randomNumber5);

    int randomNumber6 = -3 + (rand() % 15);
    printf("%d\n", randomNumber6);
}