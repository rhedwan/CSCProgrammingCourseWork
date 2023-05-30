#include <stdio.h>

int addNumber(int number1, int number2);

int main() // declaration
{
    // body
    printf("Hello World");

    int value = addNumber(23, 98);
    printf("\nThe value is: %d", value);

    // return
    return 0;
}

int addNumber(int number1, int number2)
{
    scanf("\n %d %d", &number1, &number2);
    return number1 + number2;
}