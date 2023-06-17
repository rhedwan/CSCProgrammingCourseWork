#include <stdio.h>
#include <string.h>

int main()
{
    char language[] = "C Programming";
    printf("%s", language);
    printf("\nLength %zu\n", strlen(language));

    char food[] = "Pizza";
    char bestFood[strlen(food)];
    strcpy(bestFood, food);
    printf("%s", bestFood);
    return 0;
}

// void displayString(char str[]);

/* int main()
{
    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    displayString(str); // Passing string to a function.
    return 0;
}
void displayString(char str[])
{
    printf("String Output: ");
    puts(str);
} */