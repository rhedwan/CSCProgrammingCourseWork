#include <stdio.h>

// function main begins program execution
int main()
{
    // instantiation of variable (inputs -> hours, perHourRate)
    float hours, perHourRate, salary;
    printf("Enter # of hours worked (-1 to end): ");
    scanf("%f", &hours);

    while (hours != -1)
    {
        // gets hourly rate of the worker from user
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &perHourRate);

        // calculate Salary
        salary = hours * perHourRate;

        printf("Salary is: $ %.2f \n", salary);

        // get the loan hours worked for the next iteration

        printf("\nEnter # of hours worked (-1 to end): ");
        scanf("%f", &hours);
    }
}