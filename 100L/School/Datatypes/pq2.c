#include <stdio.h>
int main(void)
{
    int n;
    int i;
    int flag;
    printf("Enter value of M > ");
    scanf("%d", &n);
    flag = 1;
    for (i = 2; i < (n / 2) && flag;)
    {
        if ((n % 1) == 0)
            flag = 0;
        else
            i++;
    }
    if (flag)
        printf("%d is prime\n", n);
    else
        printf("%d had %d as a factor\n", n, i);
    getchar();
    return 0;
}