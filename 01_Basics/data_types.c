/*
 * This file contains Data Types in C with examples and full codes written out.
 * All variables must have a specified data type and we have to use a format 
 * specifier in order to tell the compiler about the data type we want to 
 * process and receive an output.
 */

#include <stdio.h>

// Function declarations.
void modified_data_types();
void derived_data_types();
void pointers_in_c();
void functions_in_c();
void void_functions();
void void_pointers();
void structures_in_c();
void unions_in_c();
void enumerations_in_c();

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
    
    return 0;
}

// Modified data types (signed, unsigned, long, etc.)
void modified_data_types() {
    // Implementation for modified data types goes here
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

// Void functions demonstration
void void_functions() {
    // Implementation for void functions goes here
}

// Void pointers demonstration
void void_pointers() {
    // Implementation for void pointers goes here
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