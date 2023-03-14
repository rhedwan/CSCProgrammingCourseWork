#include <stdio.h>
int main(void)
{
    unsigned int counter;
    int grade;
    int total;
    float average;

    total = 0;
    counter = 0;

    printf("Enter grade, -1 to end: ");
    scanf("%d", &grade);
    while (grade != -1)
    {
        total = total + grade;
        counter += 1;

        printf("Enter grade, -1 to end: ");
        scanf("%d", &grade);
    }

    if (counter != 0)
    {
        average = (float)total / counter;
        printf("The class average %.2f\n", average);
    }
    else
    {
        puts("No grades were entered");
    }

    return 0;
}