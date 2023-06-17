#include <stdio.h>

int main()
{
    /* int a;
    float b;
    printf("Enter number > ");
    scanf("%d %f", &a, &b);
    printf("Print: %d %f", a, b);
    return 0; */

    /* int a, c;
    char b;
    printf("Enter values > ");
    scanf("%d %c %d", &a, &b, &c);
    printf("Print: %d %c %d\n", a, b, c);
    char name[] = "Ridwan";
    puts(name);
    return 0; */
    int a = 10, b = 14;
    if ((2 * a) < b && (2 * a) > b)
    {
        printf("%d", &a);
    }
    else
    {
        printf("%d\n", &b);
        printf("%p\n", &b);
    }
    do
    {
        printf("%d\n", a);
        a++;
    } while (a < 10);

    int x = printf("Hello000");
    printf("%d", x);
}
