//A variable is a named storage location in the memory that can hold a specific type of data and a value associted with it.
#include <stdio.h>
int main (){
    char name[] = "John F Kennedy"; //Strings are defined using the char data type in C.
    int age = 46; //int is the integer data type used to store whole numbers.
    float height = 1.85; //float is used to store decimal numbers.
    char initial = 'J';
    printf("Name: %s\n",name); //%s is the format specifier for strings.
    printf("Age: %d\n",age); //%d is the format specifier for integers.
    printf("Height: %.2f meters\n",height); //%.2f is used to format the float to 2 decimal places.
    printf("Initial: %c\n",initial); //%c is the format specifier for characters.
    return 0;
}