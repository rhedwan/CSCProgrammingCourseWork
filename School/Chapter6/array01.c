#include <stdio.h>
#include <math.h>

void multipleDeclaration();
void initializerList();

int main()
{
    int scores[12];
    for (size_t i = 0; i < 12; i++)
    {
        scores[i] = pow(2, i);
    }
    // printf("%d %d\n", scores[3], scores[11]);
    // multipleDeclaration();
    initializerList();
}

void multipleDeclaration()
{
    int b[10];

    // Set elements into the array
    for (size_t i = 0; i < 10; i++)
    {
        b[i] = pow(2, i);
    }
    // Print all the elements in the array
    printf("%s%13s\n", "Element", "Value");
    for (size_t i = 0; i < 10; i++)
    {
        printf("%zu%20d\n", i, b[i]);
    }
    return;
}

void initializerList()
{
    int n[] = {32, 27, 64, 18, 95};
    printf("%s%13s\n", "Element", "Value");
    for (size_t i = 0; i < 5; ++i)
    {
        printf("%7zu%13d\n", i, n[i]);
    }
}