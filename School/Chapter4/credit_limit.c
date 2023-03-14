#include <stdio.h>

int main(void)
{
    unsigned int account_number;
    float credit_limit, new_limit;
    float balance;
    for (unsigned int index = 0; index < 3; index++)
    {
        printf("Enter your account number: ");
        scanf("%u", &account_number);
        printf("Enter your credit limit before the recession: ");
        scanf("%f", &credit_limit);
        printf("Enter your current balance: ");
        scanf("%f", &balance);

        new_limit = credit_limit / 2.0;
        printf("Hey, (%u) Your new credit limit %.2f\n", account_number, new_limit);
        if (balance > new_limit)
        {
            printf("Limit exceeded for account %u\n", account_number);
        }
    }
}