#include <stdio.h>

int main(void)
{
    float weeklySales;
    weeklySales = 0.0;

    for (unsigned i = 1; i <= 2; i++) // weekly
    {
        printf("Day %u\n", i);
        float retailPrice, totalDailySales;
        totalDailySales = retailPrice = 0.0;
        for (unsigned int j = 0; j < 5; j++) // daily
        {
            unsigned int productNumber, quantity;
            float dailySales;
            dailySales = 0.0;
            printf("Enter the 'Product number' and 'Quantity': ");
            scanf("%u %u", &productNumber, &quantity);
            switch (productNumber)
            {
            case 1:
                retailPrice = 2.98;
                dailySales = retailPrice * quantity;
                totalDailySales += dailySales;
                // totalDailySales = totalDailySales + dailySales;
                break;
            case 2:
                retailPrice = 4.50;
                dailySales = retailPrice * quantity;
                totalDailySales += dailySales;
                break;
            case 3:
                retailPrice = 9.98;
                dailySales = retailPrice * quantity;
                totalDailySales += dailySales;
                break;
            case 4:
                retailPrice = 4.49;
                dailySales = retailPrice * quantity;
                totalDailySales += dailySales;
                break;
            case 5:
                retailPrice = 6.87;
                dailySales = retailPrice * quantity;
                totalDailySales += dailySales;
                break;
            }
        }
        printf("Total daily is $ %.2f\n", totalDailySales);
        weeklySales += totalDailySales;
    }
    printf("Total Weekly Sales is $ %.2f\n", weeklySales);
}
