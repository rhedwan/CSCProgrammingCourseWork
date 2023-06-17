#include <stdio.h>
int fun(int i);
int main(void)
{
    int b;
    int a = 8;
    float k = 2;
    int c = fun(fun(fun(a)));
    printf("%f\n", k);
    b = a++;
    printf("%d\n", b);
    printf("%d\n", a);
    printf("%d\n", c);

    return 0;
}
int fun(int i)
{
    i++;
    return i;
}