#include <stdio.h>

int main()
{
    double num1, num2, result;
    char operator;
    printf("Choose an operator ['*', '+', '-', '/']: ");
    scanf("%c", &operator);
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;

    case '/':
        result = num1 / num2;
        break;
    default:
        printf("Error!!!");
        break;
    }
    printf("%lf", result);
    return 0;
}