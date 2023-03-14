#include <stdio.h>

typedef struct ComplexNumber
{
    double real;
    double img;
} complex;

void main()
{
    complex c1 = {.real = 23.23, .img = 34};
    complex c2 = {.real = 67.9, .img = 21.7};
    complex sum;
    sum.real = c1.real + c2.real;
    sum.img = c1.img + c2.img;
    printf("Result is %.2lf + %.2lfi", sum.real, sum.img);
}
