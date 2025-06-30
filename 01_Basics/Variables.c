//A variable is a named storage location in the memory that can hold a specific type of data and a value associted with it.
#include <stdio.h>

void value_change();
void multiple_variables();


int main (){
    char name[] = "John F Kennedy"; //Strings are defined using the char data type in C.
    int age = 46; //int is the integer data type used to store whole numbers.
    float height = 1.85; //float is used to store decimal numbers.
    char initial = 'J';
    printf("Name: %s\n",name); //%s is the format specifier for strings.
    printf("Age: %d\n",age); //%d is the format specifier for integers.
    printf("Height: %.2f meters\n",height); //%.2f is used to format the float to 2 decimal places.
    printf("Initial: %c\n",initial); //%c is the format specifier for characters.
    value_change(); //Function call to demonstrate changing variable values.
    multiple_variables(); //Function call to demonstrate multiple variable declaration and usage.
}

void value_change() {
    int x = 10;
    printf("Value of x before change: %d\n", x);
    x = 20; //Changing the value of x
    printf("Value of x after change: %d\n", x);
}


void multiple_variables() {
    int x = 5, y = 6, z = 50;
    int sum = x+y+z;
    printf("The sum is %d", sum);
    


}