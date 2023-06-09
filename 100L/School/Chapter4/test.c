#include <stdio.h>
#include <math.h>

double area(double l1, double l2, double l3); // function prototype
double x, y, z, s, a, heron;                  // variables

int main()
{
    // double x,y,z,s,a;
    // Ask the users to input the values of the sides of the triangle
    puts("Input the values for the 3 sides of a triangle");

    printf("Enter a value for x: ");
    scanf("%lf", &x);

    printf("Enter a value for y: ");
    scanf("%lf", &y);

    printf("Enter a value for z: ");
    scanf("%lf", &z);

    // Use heron's law to check whether the sides represents that of a triangle
    // condition stated in the if statement
    if (x > 0 && y > 0 && z > 0 && x + y > z && y + z > x && x + z > y)
    {
        // if condition is true, then return the value of the area
        printf("The area of the triangle is %.2lf ", area(x, y, z));
    }
    else
    {
        // if not then it doesn't represent the sides of a triangle
        puts("Your values does not represent the sides of a triangle");
    }
}
// what the function does
double area(double x, double y, double z)
{
    // use heron's law to find the area
    s = (x + y + z) / 2;
    heron = sqrt(s * (s - x) * (s - y) * (s - z));
    return heron;
}