// This file contains Data Types in C with examples and full codes written out.
//All the variables must have a specified data type and we have to use a format specifier in order to tell the compiler about the data type we want to process and receive an output.
//Here is a code for different data types and format specifiers in C.
#include <stdio.h> 
//Basic data types in C

// Data Type Examples
void modified_data_types();
void derived_data_types();
void pointers_in_c();

// Code Constructs
void functions_in_c();
void void_functions();
void void_pointers();

// User-defined Types
void structures_in_c();
void unions_in_c();
void enumerations_in_c();


int main(){
    //Basic data types and the basic input.
    char character[] = "My name is Satnam."; //Characters.
    int age = 10; //Integers without decimal points.
    float value_of_pi = 3.14; //Fractional values with 6-7 digits.)
    double lol_large_number = 123456789.987654321; //Fractional values with upto 15 digits.
    short small_number = 5;
    int num1 ,num2,num3; //Integers without decimal points.
    printf("Character: %s\n", character); //%s is a format specifier for strings.
    printf("I am %d years old.\n", age); //%d is a format specifier for integers.
    printf("The value of pi is %f\n", value_of_pi);//%f is the format specifier for floats.
    printf("Here is a large number %lf\n", lol_large_number); //%lf is the format specifier for doubles.
    printf("Here is a small number %hd\n", small_number); //%hd is 
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3); //Taking input from the user.
    printf("You entered: %d, %d, %d\n", num1, num2, num3); //Printing the integers entered by the user.
    
}   


void modified_data_types(){
    // Here are the modified data types in C.


}

void derived_data_types(){

}

void pointers_in_c(){

}

void functions_in_c(){

}