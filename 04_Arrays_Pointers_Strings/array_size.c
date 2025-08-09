#include <stdio.h>
int main (){
    int myNumbers[]={10,25,50,75,100};
    printf("%zu", sizeof(myNumbers));
    // The output we get is 20 this is because the int data type has 4 bytes and there are 5 of integer numbers in the array thus the result is 4 X 5 = 20.
    // Knowing the memory size of an array is great when you are working on larger programs.


    // Finding out the number of elements in the array.
    int length = sizeof(myNumbers)/sizeof(myNumbers[0]);
    printf("%d\n", length);

    //The output we get is the number of elements the array has as specified it divides the number of total bytes occupied by the number of bytes occupied by one of the elements.
}