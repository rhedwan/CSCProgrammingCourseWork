#include <stdio.h>
int addNumber(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

void main()
{
    int result = addNumber(23, 45);
    printf("The sum is %d", result);
}
