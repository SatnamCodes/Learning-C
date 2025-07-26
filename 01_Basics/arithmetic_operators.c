#include <stdio.h>
int main (){
    //In C the operators are divided into the the following groups.
    // - Arithmetic
    // - Assignment
    // - Comparison
    // - Logical
    // - Bitwise
    int x,y,z,num1, addition, substraction, multiplication, division, incre, decre, modulus; 
    printf("Enter the two numbers: ");
    scanf("%d %d", &x , &y);
    //  - Arithmetic 
    addition  = x + y;
    substraction = x-y;
    multiplication = x*y;
    division = x/y;
    modulus = x%y;
    incre = ++x;
    decre = --x;
    printf("The arithmetic operator used is addition i.e + : %d\n", addition);
    printf("The arithmetic operator used is substraction  i.e - : %d\n", substraction);
    printf("The arithmetic operator used is division i.e / : %d\n", division);
    printf("The arithmetic operator used is multiplication i.e * : %d\n", multiplication);
    printf("The arithmetic operator used is modulus : %d\n", modulus);
    printf("The arithmetic operator used is increment i.e ++ : %d\n", incre);
    printf("The arithmetic operator used is decrement i.e -- : %d\n", decre);
return 0;
}

