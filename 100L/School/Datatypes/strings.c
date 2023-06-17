#include <stdio.h>
/* int main()
{
    char name[] = "Ridwan";
    printf("%s\n", name);

    char str[20];
    printf("Enter your name: ");
    // scanf("%s", str);
    fgets(str, sizeof(str), stdin);
    printf("%s\n", str);

    return 0;
}
 */

int main()
{
    char str[] = "Ridwan";
    printf("%c\n", str[0]);
    printf("%c\n", str[1]);
    printf("%c\n", str[2]);
    str[2] = 'D';
    printf("%s", str);
    return 0;
}
