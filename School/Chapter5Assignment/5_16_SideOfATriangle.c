#include <stdio.h>
#include <math.h>

double calculate_area(double a, double b, double c)
{
    double s = (a + b + c) / 2;                          // calculate the semiperimeter
    double area = sqrt(s * (s - a) * (s - b) * (s - c)); // use Heron's formula to calculate the area
    return area;
}

int is_valid_triangle(double a, double b, double c)
{
    if ((a == 0) && (b == 0) && (c == 0))
    {
        // check the triangle inequality
        return (a + b > c) && (b + c > a) && (c + a > b);
    }
    else
    {
        return 0;
    }
}

int main()
{
    double a, b, c;
    printf("Enter three sides of a triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (is_valid_triangle(a, b, c))
    {
        double area = calculate_area(a, b, c);
        printf("The area of the triangle is: %.2lf\n", area);
    }
    else
    {
        printf("Error: The sides do not form a valid triangle.\n");
    }

    return 0;
}
