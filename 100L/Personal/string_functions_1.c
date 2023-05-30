#include <stdio.h>
#include <string.h>

void main()
{
    char text1[] = "Hey";
    char text2[] = "How are you?";
    strcat(text1, text2);

    printf("%s\n", text1);
    printf("Length = %zu", strlen(text1));
}