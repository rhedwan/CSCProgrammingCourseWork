#include <stdio.h>

/* void main()
{
    char str[] = "Lagos";
    printf("%s", str);
} */

void main()
{
    char str[20];
    printf("Enter your name: ");
    fgets(str, sizeof(str), stdin);
    // scanf("%s", &str);
    printf("%s", str);
}