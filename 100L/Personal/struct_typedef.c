#include <stdio.h>

typedef struct Person
{
    double salary;
    int age;
} person;

void main()
{
    person person1 = {.age = 45, .salary = 245.262};
    // struct Person person1;
    // person1.age = 34;
    // person1.salary = 4376.26;

    printf("Age of person1: %d\n", person1.age);
    printf("Salary of person1: %lf\n", person1.salary);
}