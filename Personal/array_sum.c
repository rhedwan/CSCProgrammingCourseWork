#include <stdio.h>

int main()
{
    int age[5];
    printf("Enter 5 input values: ");

    scanf("%d", &age[0]);
    scanf("%d", &age[1]);
    scanf("%d", &age[2]);
    scanf("%d", &age[3]);
    scanf("%d", &age[4]);
    int i = 0;
    double sum = 0;

    while (i < 5)
    {
        sum = sum + age[i];
        i++;
    }
    printf("The average = %lf ", sum / 5);
}