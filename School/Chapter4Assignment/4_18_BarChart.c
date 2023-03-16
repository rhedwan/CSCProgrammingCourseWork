#include <stdio.h>

int main(void)
{
    unsigned int l1, l2, l3, l4, l5;
    printf("Enter the 5 bar lengths: ");
    scanf("%u %u %u %u %u", &l1, &l2, &l3, &l4, &l5);
    for (unsigned int i = 1; i <= 5; i++)
    {
        unsigned int current_bar;
        switch (i)
        {
        case 1:
            current_bar = l1;
            break;
        case 2:
            current_bar = l2;
            break;
        case 3:
            current_bar = l3;
            break;
        case 4:
            current_bar = l4;
            break;
        case 5:
            current_bar = l5;
            break;
        default:
            break;
        }
        for (unsigned int index = 0; index < current_bar; index++)
        {
            printf("*");
        }
        printf("\n");
    }
}