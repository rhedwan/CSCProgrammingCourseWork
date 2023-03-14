#include <stdio.h>

int main()
{
    // int age[5] = {2, 4, 3, 6, 23};
    // printf("%d", age[0]);
    int age[3];
    printf("Enter 3 input values: ");

    scanf("%d", &age[0]);
    scanf("%d", &age[1]);
    scanf("%d", &age[2]);
    int i = 0;
    while (i < 3)
    {
        printf("%d ", age[i]);
        i++;
    }
}