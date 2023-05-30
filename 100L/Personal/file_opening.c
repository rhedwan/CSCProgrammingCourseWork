#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fptr;

    fptr = fopen("newText1.txt", "w");
    char input[1000];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the name: ");
        scanf("%s", &input);
        fputs(strcat(input, "\n"), fptr);
    }
    fclose(fptr);
}