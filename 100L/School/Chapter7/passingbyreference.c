#include <stdio.h>

int cubeByReference(int *nPtr);
int main()
{
    // initialize number
    int number = 5;
    printf("The original value of number is %d", number);

    // pass address of number to cubeByReference
    cubeByReference(&number);

    printf("\nThe new value of number is %d\n", number);
    return 0;
}

// calculate cube of *nPtr; actually modifies number in main
int cubeByReference(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr
}