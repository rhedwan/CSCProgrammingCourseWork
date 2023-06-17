#include <stdio.h>
int main(void)
{
    int a[3] = {1, 2, 3};
    int *p = a;
    printf("%p \t %p", p, a);
}