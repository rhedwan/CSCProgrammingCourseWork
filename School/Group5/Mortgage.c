#include <stdio.h>

// function main begins program execution
int main()
{
    // Variable needed i.e inputs by program
    /* instantiation of variable (inputs -> accountNumber, mortgageAmount,
     interestRate, mortgageTerm) */
    int accountNumber;
    float mortgageAmount, interestRate, mortgageTerm, totalAmount,
        monthlyPayable;
    printf("Enter account number (-1 to end) : ");
    scanf("%d", &accountNumber);

    // keeps until -1 is used to end the loop
    while (accountNumber != -1)
    {
        // get mortgage amount from user
        printf("Enter mortgage amount (in dollars): ");
        scanf("%f", &mortgageAmount);

        // gets mortgage term from user
        printf("Enter mortgage term (in years): ");
        scanf("%f", &mortgageTerm);

        // gets minterest rate from user
        printf("Enter interest rate (as a decimal): ");
        scanf("%f", &interestRate);

        // calculate monthly payable interest
        totalAmount = mortgageAmount + (mortgageAmount * interestRate * mortgageTerm);
        monthlyPayable = (totalAmount / (12 * mortgageTerm));
        printf("The monthly payable interest $ %d \n", (int)monthlyPayable);

        // get the account number for the next iteration
        printf("\nEnter account number (-1 to end) : ");
        scanf("%d", &accountNumber);
    }
}