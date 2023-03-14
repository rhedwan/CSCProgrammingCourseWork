#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    bool even = number % 2 == 0;

    // char isEvenOdd = even ? 'Even' : 'Odd' ;
    char isEvenOdd = even ? 'E' : 'O';

    printf("The number is %c", isEvenOdd);
    // printf("%c", 'h');
}

// 34 if True else False