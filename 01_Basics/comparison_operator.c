#include <stdio.h>
int main(){
    //Comparison Operators.
    int x,y;
    x=5;
    y=3;
    printf("The variable x is assigned the value 5 and the variable y is assigned the value 3.\n");
    printf("Using the comparison operator == to check if the two numbers are equal.\n");
    printf("Return 0 if false and 1 if true.: %d\n", x==y );
    printf("Using the comparison operator != to check if the  if the numbers are not equal\n");
    printf("Return 0 if false and 1 if true: %d\n", x!=y);
    printf("Using the comparison operator > that checks if the first number is greater than the second number.\n");
    printf("If the first number i.e x is greater than y then return 1 else return 1 : %d \n" , x>y);
    printf("The comparison operator < works in the same way as the greater than operator.\n");
    printf("There are two operators i.e =< and >= that check greater than and equal to conditions together and return 1 or 0 accordingly\n");

}