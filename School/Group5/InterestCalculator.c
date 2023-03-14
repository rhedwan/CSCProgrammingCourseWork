#include <stdio.h>

// function main begins program execution
int main()
{
    // instantiation of variable (inputs -> principal, interestRate, interestTerm)
    float principal, interestRate, interestTerm, interestAmount;
    printf("Enter loan principal (-1 to end): ");
    scanf("%f", &principal);

    // loop while sentinel value not yet read from user
    // keeps until -1 is used to end the loop
    while (principal != -1)
    {
        // gets interest rate from user
        printf("Enter interest rate: ");
        scanf("%f", &interestRate);

        // gets term from user
        printf("Enter term of the loan in days: ");
        scanf("%f", &interestTerm);

        // calculate interest charge
        interestAmount = (principal * interestRate * interestTerm) / 365;
        printf("The interest charge is $  %.2f \n", interestAmount);

        // get the loan principal for the next iteration
        printf("\nEnter loan principal (-1 to end): ");
        scanf("%f", &principal);
    }
}