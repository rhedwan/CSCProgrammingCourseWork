#include <stdio.h>

int cubeByValue(int n);
int main()
{
    // initialize number
    int number = 5;
    printf("The original value of number is %d", number);

    // pass number by value to cubeByValue
    number = cubeByValue(number);

    printf("\nThe new value of number is %d\n", number);
    return 0;
}

// calculate and return cube of integer argument
int cubeByValue(int n)
{
    return n * n * n; // cube local variable n and return result
}