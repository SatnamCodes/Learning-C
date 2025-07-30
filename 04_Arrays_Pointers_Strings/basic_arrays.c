//Basics of arrays.
//Arrays are the data structures used to store multiple values in a single variable instead of declaring seperate variables for each value.
//Syntax - int firstarray[] = {10,20,30,40};
#include <stdio.h>
int main(){

//Declaring an Array.
    int myNumbers[] = {10,20,30,40};
//Access the elements of an Arrays.
printf("The first element of the array is :%d\n", myNumbers[0]); //Accesses the first element in the array.


//Change an array element.
//To change the specific value of a specific element.
myNumbers[0] = 35;
printf("The first element of the array after the change is :%d\n",myNumbers[0]);

}
