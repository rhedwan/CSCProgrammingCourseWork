#include <stdio.h>

int main(void)
{
    int number = 23;

    printf("%d\n", ++number);
    printf("%d\n", ++number);
    printf("%d\n", number--);
    printf("%d\n", number);

    int age = 90;
    printf("%d\n", --age);
    printf("%d\n", age--);
    printf("%d\n", age);
    return 0;
}
