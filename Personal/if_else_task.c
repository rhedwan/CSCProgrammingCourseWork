#include <stdio.h>

int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    if ( number < 0)
    {
        printf("Negative Number");
    }
    else if (number > 0)
    {
        printf("Positive Number");
    } else
    {
        printf("Zero Number");
    }
    return 0;
}