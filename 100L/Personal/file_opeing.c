#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("newText.txt", "w");
    fputs("I love C programming", fptr);
    fputs("I see you", fptr);
    fclose(fptr);
}
