#include <stdio.h>

void main()
{
    double *pointer, salary, newSalary;
    printf("Enter your salary: ");
    scanf("%lf", &salary);

    pointer = &salary;

    printf("The salary is %lf", *pointer);

    newSalary = salary * 2;
    pointer = &newSalary;

    printf("\nThe new salary is %lf", *pointer);
}