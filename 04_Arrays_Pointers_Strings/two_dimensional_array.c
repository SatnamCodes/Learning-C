// A two dimensional array is also called a matrix
//To create a 2d array we just give out the size of rows and columns along with the elements in the same way we gave for a one dimensional array.
#include <stdio.h>
int main(){
int matrix[2][3] = {{1,2,3},{3,5,6}};
//the first dimension ie 2 refers to the number of rows while the second dimension i.e 3 refers to the columns.
printf("%d\n", matrix[0][3]);
//the 3rd element in the first row is 3 thus it returns 3 as the output.


//changing the element in a 2d array
matrix[2][0] = 10;
printf("%d\n", matrix[2][0]);
}