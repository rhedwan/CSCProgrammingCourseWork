#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 4;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory can't be allocated");
        return 0;
    }
    printf("Enter input values: \n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
    }
    printf("Input values: \n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d\n", *(ptr + i));
    }
    free(ptr);
    return 0;
}