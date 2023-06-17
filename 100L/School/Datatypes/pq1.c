#include <stdio.h>
int fun(int i);
int main(void)
{
    int a = -3, b = 2, c = 4, d = (--a) + (++b) + (c++);
    printf("%d, %d, %d, %d\n", a, b, c, d);
}