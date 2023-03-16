#include <stdio.h>

// function main begins program execution
int main()
{
    // instantiation of variable (inputs -> totalSales)
    float totalSales, salesCommission;
    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f", &totalSales);

    // keeps until -1 is used to end the loop
    while (totalSales != -1)
    {

        // calculate salesCommission
        salesCommission = 200 + (totalSales * 0.09);

        printf("Salary is: $ %.2f \n", salesCommission);

        // get sales in dollars for the next iteration

        printf("\nEnter sales in dollars (-1 to end): ");
        scanf("%f", &totalSales);
    }
}