//Booleans are included in the <stdbool.h>.
// bool is ProgrammmingFun= true;
//Boolean variable is decleared with bool keyword and take the values of true or false.
#include<stdio.h>
#include <stdbool.h>
int main(){
bool isProgrammingFun = true; //assigning a boolean value to a variable.
bool isHostelFoodTasty= false;
printf("%d\n",isProgrammingFun); //printing a numerical bool value.
printf("%d\n",10>9); //boolean conditions on mathematical constants.

//comparing variables
int x=10;
int y=9;
printf("%d\n", x<y); //checking out the boolean condition for a comparing variables.

//array comparison
bool didSatnamPass = true;
bool didRyanPass = true;
printf("%d\n", didSatnamPass==didRyanPass);


}