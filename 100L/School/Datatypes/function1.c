#include <stdio.h>
#include <string.h>

/* int main()
{
    char text1[30] = "Hey, ";
    char text2[] = "How are you?";
    strcat(text1, text2);
    printf("%s", text1);
    return 0;
} */

int main()
{
    char text1[] = "abcd";
    char text2[] = "aefgh";
    int result = strcmp(text1, text2);
    printf("%d", result);
    return 0;
}