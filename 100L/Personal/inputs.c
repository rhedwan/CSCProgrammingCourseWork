#include <stdio.h>

int main() {
   int age;
   printf("Enter your age: ");
   scanf("%d", &age);
   printf("\nAge = %d", age);

   double number;
   char alphabet;
   printf("\nEnter the double number: ");
   scanf("%lf", &number);

   printf("\nEnter the character input: ");
   scanf("\n%c", &alphabet);

   printf("\nNumber : %lf", number);
   printf("\nCharacter  : %c", alphabet);
   return 0;



}