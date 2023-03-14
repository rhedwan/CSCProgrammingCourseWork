#include <stdio.h>

int main()
{
    int arr[2][3] = {{1, 3, 5}, {45, 33, 23}};
    // printf("%d", arr[0][1]);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }

    return 0;
}