#include <stdio.h>

/* int main(){
    int age;
    printf("Enter the age: ");

    scanf("%d", &age);

    (age >= 18)? printf("You can vote") : printf("Yoy cannot vote") ;

    return 0;
} */


int main(){
    char operator = '+';
    int num1;
    int num2;
    printf("Enter the 2 number: ");
    scanf("%d %d", &num1, &num2);
    int result = (operator == '+') ? num1 + num2 : num1 - num2 ;

    printf("The sum is %d", result);

    return 0;
}