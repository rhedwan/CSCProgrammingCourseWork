#include <stdio.h>
#include <string.h>

// void main()
// {
//     char language[] = "C Programming";

//     printf("%s\n", language);
//     printf("Length = %zu", strlen(language));
// }

void main()
{
    char food[] = "Yam";
    char bestFood[strlen(food)];
    strcpy(bestFood, food);

    printf("%s\n", food);
    printf("Length = %zu", strlen(bestFood));
}