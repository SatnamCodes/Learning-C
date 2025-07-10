/*
 * This file contains Data Types in C with examples and full codes written out.
 * All variables must have a specified data type and we have to use a format 
 * specifier in order to tell the compiler about the data type we want to 
 * process and receive an output.
 */

#include <stdio.h>
#include "data_types.h"
// Function declarations.


int main() {
    // Basic data types.
    char character[] = "My name is joeyyy.";           // String (array of characters)
    int age = 10;                                      // Integer without decimal points
    float value_of_pi = 3.14f;                         // Float with 6-7 digits precision
    double large_number = 123456789.987654321;         // Double with up to 15 digits precision
    short small_number = 5;                            // Short integer
    int num1, num2, num3;                              // User input integers
    
    // Display basic data types .
    printf("=== Basic Data Types Demo ===\n");
    printf("Character: %s\n", character);              // %s for strings
    printf("I am %d years old.\n", age);               // %d for integers
    printf("The value of pi is %.2f\n", value_of_pi);  // %f for floats
    printf("Here is a large number %.9lf\n", large_number); // %lf for doubles
    printf("Here is a small number %hd\n", small_number);   // %hd for short integers
    
    // Taking input from the user
    printf("\n=== User Input Demo ===\n");
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Display user input and calculations
    printf("You entered: %d, %d, %d\n", num1, num2, num3);
    printf("The sum of the three integers is: %d\n", num1 + num2 + num3);
    printf("\n");
    modified_data_types();
    derived_data_types();
    pointers_in_c();
    functions_in_c();
    void_functions();
    void_pointers();
    structures_in_c();
    unions_in_c();
    enumerations_in_c();
    
    
}

// Modified data types (signed, unsigned, long, etc.)
void modified_data_types() {
    /*Data type modifiers are used to modify the length , range or the original size of a primitive data type*/
    int a;
    short int c; 
    printf(" Size of the int is : %lu\n" , sizeof(a));
    printf("Size of the short int data type is %lu\n", sizeof(c));
    
    // A short modifier in C works with the int data type and hence decreases its size to 2 bytes along with the range of values that the original data type can store.

    /*An unsigned int cannot represent a negative value.*/
}

// Derived data types (arrays, pointers, functions)
void derived_data_types() {
    // Implementation for derived data types goes here
}

// Pointer concepts and examples
void pointers_in_c() {
    // Implementation for pointers goes here
}

// Function concepts and examples
void functions_in_c() {
    // Implementation for functions goes here
}

// int functions demonstration
void void_functions() {
    // Implementation for int functions goes here
}

// int pointers demonstration
void void_pointers() {
    // Implementation for int pointers goes here
}

// Structure concepts and examples
void structures_in_c() {
    // Implementation for structures goes here
}

// Union concepts and examples
void unions_in_c() {
    // Implementation for unions goes here
}

// Enumeration concepts and examples
void enumerations_in_c() {
    // Implementation for enumerations goes here

}

