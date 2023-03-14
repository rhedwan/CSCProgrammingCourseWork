#include <stdio.h>

/* void main()
{
    int age = 34;
    printf("%p", &age);
} */

// Accessing the value stored in the pointer variable
/* void main()
{
    int age = 34;
    // printf("%p", &age);

    int *ptr = &age;
    printf("\nAddress: %p", ptr);
    printf("\nValue %d", *ptr);
} */

// Updating the value stored in the pointer variable
void main()
{
    int age = 34;

    int *ptr = &age;
    printf("\nValue %d", age);

    *ptr = 90;
    printf("\nValue %d", age);
}