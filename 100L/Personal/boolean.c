#include <stdio.h>
#include <stdbool.h>

/*
int main(){
    bool value1 = true ;
    bool value2 = false ;

    printf("%d", value1);
    printf("%d", value2);
    return 0;
} */

/* int main(){
    // bool value = (9 > 9) ;
    // bool value = (9 == 9) ;
    // bool value = (9 != 9) ;
    // bool value = (9 >= 9) ;
    bool value = (9 <= 7) ;
    printf("%d", value);
} */


/* int main (){
 int num1 = 9;
 int num2 = 4;
 bool value = num1 > num2 ;
 printf("%d", value);
return 0;
} */


int main (){
 int age = 18;
 double height = 6.3;
 bool result = (age >= 18 ) && (height > 96);

 printf("%d", result);
return 0;
}