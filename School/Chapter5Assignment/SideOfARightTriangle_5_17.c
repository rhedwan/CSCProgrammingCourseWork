#include <stdio.h>
#include <math.h>

int is_valid_right_triangle(double a, double b, double c)
{
    return pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(b, 2) + pow(a, 2); // check the triangle inequality
}

int main()
{
    double a, b, c;
    printf("Enter three sides of a triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (is_valid_right_triangle(a, b, c))
    {
        printf("This is a Right Triangle");
    }
    else
    {
        printf("This is not a Right Triangle");
    }

    return 0;
}
